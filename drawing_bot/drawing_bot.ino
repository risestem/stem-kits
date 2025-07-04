#include <Stepper.h>
#include <Servo.h>
#include <math.h>


const int stepsPerRevolution = 2048;
const float trackCM = 11.0;
const float wheelDiameterCM = 6.2;
const float wheelCircumferenceCM = PI * wheelDiameterCM;
const float stepsPerCM = stepsPerRevolution / wheelCircumferenceCM;
const float turnCorrection = 1.01;


// Stepper 1 pin connections (IN1, IN2, IN3, IN4)
#define STEPPER1_IN1 2
#define STEPPER1_IN2 3
#define STEPPER1_IN3 4
#define STEPPER1_IN4 5


// Stepper 2 pin connections (IN1, IN2, IN3, IN4)
#define STEPPER2_IN1 9
#define STEPPER2_IN2 8
#define STEPPER2_IN3 7
#define STEPPER2_IN4 6


// Servo pin
#define SERVO_PIN 12


Stepper stepper1(stepsPerRevolution, STEPPER1_IN1, STEPPER1_IN3, STEPPER1_IN2, STEPPER1_IN4);
Stepper stepper2(stepsPerRevolution, STEPPER2_IN1, STEPPER2_IN3, STEPPER2_IN2, STEPPER2_IN4);


Servo myServo;


void setup() {
 Serial.begin(9600);
 setMotorSpeed(15);


 // Start at 2.5cm from left, 5cm from bottom, facing RIGHT


 // === R ===
 penDown(); moveForward(10);
 turnRight(90); moveForward(5);
 turnRight(90); moveForward(5);
 turnRight(90); moveForward(5);
 turnLeft(135); moveForward(7.071);
 penUp();


 // === I ===
 turnLeft(45); moveForward(2);
 penDown();
 turnLeft(90); moveForward(10);
 penUp();


 // === S ===
 turnRight(90); moveForward(2);
 penDown();
 moveForward(5);
 penUp();
 moveBackward(5);
 turnRight(90);
 penDown();
 moveForward(5);
 turnLeft(90);
 moveForward(5);
 turnRight(90);
 moveForward(5);
 turnRight(90);
 moveForward(5);
 penUp();
 moveBackward(12);


 // === E ===
 penDown();
 moveForward(5);
 turnRight(90);
 moveForward(5);
 turnRight(90);
 moveForward(5);
 penUp();
 moveBackward(5);
 turnLeft(90);
 penDown();
 moveForward(5);
 turnRight(90);
 moveForward(5);
}


void releaseSteppers() {
 // Stepper 1
 digitalWrite(STEPPER1_IN1, LOW);
 digitalWrite(STEPPER1_IN2, LOW);
 digitalWrite(STEPPER1_IN3, LOW);
 digitalWrite(STEPPER1_IN4, LOW);


 // Stepper 2
 digitalWrite(STEPPER2_IN1, LOW);
 digitalWrite(STEPPER2_IN2, LOW);
 digitalWrite(STEPPER2_IN3, LOW);
 digitalWrite(STEPPER2_IN4, LOW);
}


void setMotorSpeed(long speed) {
 stepper1.setSpeed(speed);
 stepper2.setSpeed(speed);
}


void penUp() {
 myServo.attach(SERVO_PIN);
 delay(500);
 myServo.write(90);
 delay(500);
 myServo.detach();
}


void penDown() {
 myServo.attach(SERVO_PIN);
 delay(500);
 myServo.write(180);
 delay(500);
 myServo.detach();
}


void moveForward(float distance) {
 int steps = round(distance * stepsPerCM);
 for (int i = 0; i <= steps; i++) {
   stepper1.step(1);
   stepper2.step(1);
 }
 releaseSteppers();
 delay(500);
}


void moveBackward(float distance) {
 int steps = round(distance * stepsPerCM);
 for (int i = 0; i <= steps; i++) {
   stepper1.step(-1);
   stepper2.step(-1);
 }
 releaseSteppers();
 delay(500);
}


void turnRight(int degrees) {
 float fraction = degrees/360.0;
 float distance = trackCM * PI * fraction;
 int steps = round(distance * stepsPerCM * turnCorrection);
 for (int i = 0; i < steps; i++) {
   stepper1.step(1);
   stepper2.step(-1);
 }
 releaseSteppers();
 delay(500);
}


void turnLeft(int degrees) {
 float fraction = degrees/360.0;
 float distance = trackCM * PI * fraction;
 int steps = round(distance * stepsPerCM * turnCorrection);
 for (int i = 0; i < steps; i++) {
   stepper1.step(-1);
   stepper2.step(1);
 }
 releaseSteppers();
 delay(500);
}


void loop() {
 // Nothing should loop
}
