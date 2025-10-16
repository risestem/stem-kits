# RISE Kits

Welcome to the RISE Kits repository! Here you’ll find open-source resources for a growing collection of hands-on STEM kits designed to teach students real-world engineering, physics, and programming through engaging DIY projects. Each kit enables learners to build every component, wire all connections, and program their creations using the Arduino IDE or similar tools.

## Table of Contents

1. [What are RISE Kits?](#what-are-rise-kits)
2. [Repository Structure](#repository-structure)
3. [Current Kits](#current-kits)
    - [Drawing Bot](#1-drawing-bot)
    - [CNC Pen Plotter](#2-cnc-pen-plotter)
    - [Robotic Arm](#3-robotic-arm)
    - [Raspberry Pi Game Console](#4-raspberry-pi-game-console-postponed)
4. [Contributing](#contributing)
5. [License](#license)
6. [Contact](#contact)

## What are RISE Kits?

**RISE Kits** are a series of do-it-yourself STEM project kits that introduce students to engineering, computer science, and physics concepts. RISE's goal is to provide FREE kits to students in our community. 

- **Audience**: Middle school students, educators, workshop leaders, makerspaces, families, and hobbyists.
- **Format**: Designed for use at home, in classrooms, or during workshops at schools, libraries, and community centers.
- **Philosophy**: Make STEM education tangible, creative, and accessible through hands-on building and programming.
- **Learning Outcomes**: Engineering design, physics, electronics, coding (Arduino/C++), and problem-solving skills.


## Repository Structure

- `drawing_bot/` - Complete files (code, 3D models, instructions) for the Drawing Bot kit.
- `trebuchet/` - (Coming soon) Files for a 3D-printed/laser-cut trebuchet kit to teach physics and mechanical engineering.
- More kit folders coming soon, each with a Bill of Materials (BOM), code, and assembly guides.

## Current Kits

### 1. Drawing Bot

A programmable robot that can draw patterns or letters. Students build the robot from scratch, wire all components, and upload Arduino code to control its movements.

**CAD:** [Onshape](https://cad.onshape.com/documents/bb968d8fb2070a289d3f2913/w/538545adee42cfc921f6a605/e/ba9d169c3e0d8e1334ed3d13?renderMode=0&uiState=686ac18c67892d702480853d)

**Features:**
- 2 stepper motors for XY movement
- 1 servo for pen up/down
- Arduino Nano control
- Breadboard-based wiring (no soldering required)

**Folder**: [`drawing_bot/`](./drawing_bot/)

#### Code Example

The `drawing_bot` folder contains example Arduino code to draw the letters "RISE".  
For full code and instructions, see [`drawing_bot/drawing_bot.ino`](./drawing_bot/drawing_bot.ino).

```cpp
#include <Stepper.h>
#include <Servo.h>
#include <math.h>

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
}
```

#### Assembly & Programming Instructions

1. 3D print or gather all mechanical parts (wheels, chassis, pen holder, etc.).
2. Assemble the robot following the included guide in `drawing_bot/` or [here](https://github.com/risestem/stem-kits/blob/main/drawing_bot/Drawing%20Bot%20Manual%20v1%20(No%20Programming).pdf).
3. Wire all components on the breadboard following the guide and by using the schematic provided.
4. Upload the example code to the Arduino Nano using the Arduino IDE.
5. Place the robot on paper and watch it draw!

#### Photos

<p align="center">
  <img src="https://github.com/user-attachments/assets/9d5e7210-7851-4821-b37b-f1143026063d" alt="The completed Drawing Bot kit with custom wheels and a pen attached, ready to draw." width="500">
  <br>
  <em>The completed Drawing Bot, ready to bring code to life.</em>
</p>

---
### 2. CNC Pen Plotter

> [!IMPORTANT]
> Due to the difficulty of assembly and use, this will likely not be used in lessons!

2 axis CNC plotter that uses a marker to draw on paper. Powered by steppers and servos and designed to be a "2 in 1" alternative to the Drawing Bot while teaching G-Code basics and extending learning.

**CAD:** [Onshape](https://cad.onshape.com/documents/e8de9894a3fb29760a1077de/w/5c5bd0e99e905e86dfd261f6/e/f2af0ee17d8835493505ec1c?renderMode=0&uiState=68f15fc094957c3340305e64)

**Features:**
This kit is inteded to be possible to construct using only parts from the Drawing Bot
- 2 stepper motors for XY movement
- 1 servo for pen up/down
- Arduino Nano control
- Breadboard-based wiring (no soldering required)

#### Assembly & Programming Instructions

1. 3D print or gather all mechanical parts (wheels, chassis, pen holder, etc.).
2. Assemble the robot following the CAD (instruction manual to be made).
3. Wire all components on the breadboard.
4. Download Universal G-Code Sender and Inkscape 0.92.2
5. Create your drawing on Inkscape and use the Servo SVG Tool to export it as G-Code
6. Upload the G-Code to Universal G-Code Sender, hit play, and watch the robot run!

#### Photos

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/fc9c14f8-1d6e-409e-adc8-2300435c5a88" alt="Front view of the CNC Pen Plotter, showing the X and Y axes." width="400">
      <br>
      <em>Finished CNC Plotter drawing.</em>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/991b242b-af29-4ed4-8ea1-857499c5499f" alt="Side view of the CNC Pen Plotter, highlighting the servo motor for the Z-axis." width="400">
      <br>
      <em>Side view, showing the pen-lifting mechanism.</em>
    </td>
  </tr>
</table>

---
### 3. Robotic Arm

6 DOF robotic arm powered by 6 SG90 servo motors. The next generation of RISE kits planned for use in RISE engineering curriculum to supplement mechanical and electrical engineering lessons.

**CAD:** [Onshape](https://cad.onshape.com/documents/31f9a4ccf8270ed4b4feaa9b/w/914a771cc65a46709282e413/e/b75a0c77d5754acd8a1cc8b8?renderMode=0&uiState=68f1611e0222f01b0e1b8e0b)

---

### 4. Raspberry Pi Game Console (POSTPONED)

Custom handheld gaming console based on the Raspberry Pi Pico, designed to teach soldering, electronics, and coding.

- Folder: `game_console/`

PCB: [EasyEDA](https://oshwlab.com/wattbrayden/rise-console)

---

## Contributing

- Want to add your own kit? Fork this repo and add a new folder with BOM, code, and assembly instructions.
- Pull requests and suggestions are welcome!

## License

MIT License. See `LICENSE` for details.

## Contact

Questions or want to use RISE Kits in your classroom or workshop?  
Open an issue or email <braydenwatt@westminster.net>.
