# RISE Kits

Welcome to the RISE Kits repository! Here you’ll find open-source resources for a growing collection of hands-on STEM kits designed to teach students real-world engineering, physics, and programming through engaging DIY projects. Each kit enables learners to build every component, wire all connections, and program their creations using the Arduino IDE or similar tools.

## Table of Contents

1. [What are RISE Kits?](#what-are-rise-kits)
2. [Repository Structure](#repository-structure)
3. [Current Kits](#current-kits)
    - [Drawing Bot](#1-drawing-bot)
        - [Code Example](#code-example)
        - [Assembly & Programming Instructions](#assembly--programming-instructions)
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

// ... (see drawing_bot/drawing_bot.ino for full code)
```

#### Assembly & Programming Instructions

1. 3D print or gather all mechanical parts (wheels, chassis, pen holder, etc.).
2. Assemble the robot following the included guide in `drawing_bot/`.
3. Wire all components on the breadboard using the schematic provided.
4. Upload the example code to the Arduino Nano using the Arduino IDE.
5. Place the robot on paper and watch it draw!

---

### 2. Raspberry Pi Game Console (Coming Soon)

Custom handheld gaming console based on the Raspberry Pi Pico, designed to teach soldering, electronics, and coding.

- Folder: `game_console/`
- BOM, files, and lesson materials coming soon.

---

### 3. Trebuchet (POSTPONED)

A laser-cut trebuchet designed to teach physics (kinematics), mechanical engineering, and hands-on building skills.

- Folder: `trebuchet/`
- BOM, files, and lesson materials coming soon.

---

## Contributing

- Want to add your own kit? Fork this repo and add a new folder with BOM, code, and assembly instructions.
- Pull requests and suggestions are welcome!

## License

MIT License. See `LICENSE` for details.

## Contact

Questions or want to use RISE Kits in your classroom or workshop?  
Open an issue or email <braydenwatt@westminster.net>.

