# 🏠 Smart Home Simulation — KidsBits + C++ (PlatformIO)

## Overview

This repository documents my **hands-on learning journey** building **smart home simulations** using the **KidsBits coding box** and a **simple robotic car** with **C++**.

I’m intentionally **not using Mixly**. (Secretly trying to preserve my RAM😅)
Instead, I’m using **PlatformIO in VS Code** to learn **proper embedded C++**, real project structure, and hardware control.

This is not about drag-and-drop blocks.
It’s about understanding how things actually work and preserving storage as a bonus
---

## Why this project exists

* To get **comfortable with the KidsBits hardware** and a simple **Robotic Car***
* To learn **embedded C++** in a real environment
* To move from beginner Arduino-style sketches to **clean, structured code**
* To simulate **real smart-home scenarios** (lights, fans, sensors, automation logic)

---

## Tools & Setup (Option A)

**Chosen approach: Clean & Simple**

* **Editor:** VS Code
* **Extension:** PlatformIO IDE
* **Board:** Arduino Uno–compatible (ATmega328P, CH340)
* **Language:** C++ (Arduino framework)

Why PlatformIO?

* Proper project structure
* Real C++ compilation (no Arduino IDE magic)
* Scales to bigger projects
* Industry-relevant workflow

---
## Sensors the Box Contains
**Input**
* Temp
* Gas Sensor
* Sound
* Trimpod
* Button
* Photocell Sensor
* PIR motion Sensor
* Magnetic reed Sensor

** Output**
* Fan
* LED (red and green)
* Buzzer
* LED dot matrix
* AGB Led
* Power Led
* Servo

## Sensors the Robotic Car(The smart vacuum cleaner)
* Ultrasonic module
* Light Sensors
  


## What I’m Trying to Simulate (Project Ideas)

This repo evolves as I learn. Projects include:

* ✅ Automatic room light (LDR-based)
* ✅ Motion-activated fan/light 
* ✅ Fan control (on/off, timed stop)
* 🚧 Smart hallway simulation
* 🚧 Temperature-controlled fan
* 🚧 Combined sensor logic (light + motion)
* 🚧 Combined sensor logic (magnetic reed sensor + LED)
* 🚧 Combined sensor logic (Sound input + buzzer)
* 🚧 Combined sensor logic (Photocell Sensor +AGB Led)(think of the outdoor lights)
* 🚧 Combined sensor logic (Gas Sensor + buzzer)
* 🚧 Ultrasonic module (to avoid objects)
* 🚧 Ultrasonic module + bottom Light Sensors ( avoid objects and prevent it from falling)
 

Each project focuses on **one core concept**, then builds up.

---

## What I’m Learning

* Embedded C++ basics
* GPIO control (`pinMode`, `digitalWrite`, `analogRead`)
* Timing (`delay`, later `millis`)
* Hardware logic vs software logic
* Debugging linker and build errors
* Proper file structure (`main.cpp`, headers, modules)
* Why things break — and how to fix them

---

## Project Structure

Typical structure used:

```
src/
 └── main.cpp        // setup() and loop()
```

As projects grow:

```
src/
 ├── main.cpp
 ├── fan.cpp
 └── fan.h
```

Learning **why headers exist**, not just using them.

---

## Philosophy

* Start simple
* Make it work
* Break it
* Fix it
* Refactor later

If the fan spins or stops when I expect it to — that’s progress, new errors still count

---

## Status

🟡 In progress
This repo will be updated as I get more comfortable with:

* Sensors
* Multi-file C++
* Real automation logic

---

## Final Note

This is a **learning repo**, not a polished product.

Mistakes are expected. Especiall on my side
Understanding them is the goal.

