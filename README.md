# Switzerland Animated Scene – OpenGL/GLUT

A 2D interactive computer graphics project developed in **C++ using OpenGL and GLUT**. The project presents an animated Switzerland-inspired landscape with mountains, houses, pine trees, towers, a Swiss flag, wind turbines, moving vehicles, clouds, and a cable car.

The scene supports day/night switching, turbine control, and adjustable animation speed through keyboard and mouse input.

## 🎥 Video Demo

https://github.com/user-attachments/assets/5579bccc-4690-4670-afa4-ac5cc3ce4ba0

## ✨ Features

* 2D Switzerland-inspired landscape
* Day and night modes
* Animated clouds
* Moving cable car
* Moving bus and cars
* Wind turbines with start/stop control
* Adjustable animation speed
* Snow-covered mountains
* Pine trees and houses
* Clock tower
* Swiss flag
* Road and fence
* Keyboard and mouse interaction

## 🎮 Controls

| Input             | Action                      |
| ----------------- | --------------------------- |
| `N`               | Switch to night mode        |
| `D`               | Switch to day mode          |
| `R`               | Start wind turbine rotation |
| `S`               | Stop wind turbine rotation  |
| Left Mouse Click  | Increase animation speed    |
| Right Mouse Click | Decrease animation speed    |

## 🛠️ Technologies Used

* C++
* OpenGL
* GLUT / FreeGLUT
* GLU

## 📋 Requirements

To run the project, you need:

* C++ compiler such as MinGW/G++
* OpenGL libraries
* GLUT or FreeGLUT
* GLU

The source code uses `windows.h`, so it is designed for a Windows-based OpenGL/GLUT environment.

## 🚀 How to Run

### Using Code::Blocks or Dev-C++

1. Install and configure GLUT/FreeGLUT.
2. Create a C++ OpenGL project.
3. Add the project source file.
4. Link the required OpenGL libraries.
5. Build and run the project.

Typical libraries:

```text
opengl32
glu32
freeglut
```

### Using MinGW / G++

Compile the program using:

```bash
g++ main.cpp -o SwitzerlandScene -lfreeglut -lopengl32 -lglu32
```

Run:

```bash
SwitzerlandScene.exe
```

## 🖥️ Scene Components

The project contains several graphical objects, including:

* Sky
* Sun and moon
* Stars
* Clouds
* Mountains
* Road
* Houses
* Pine trees
* Swiss flag
* Towers
* Fence
* Cable car
* Wind turbines
* Bus
* Cars

These objects are combined to create the complete animated landscape.

## ⚙️ Animation

Several objects move continuously in the scene:

* Clouds
* Cable car
* Bus
* Cars
* Wind turbine blades

The turbine rotation can be started or stopped using the keyboard.

The overall animation speed can also be changed using mouse clicks.

## 🌗 Day and Night Mode

The project includes two visual modes:

**Day Mode**

* Blue sky
* Sun
* Bright environment

**Night Mode**

* Dark sky
* Moon
* Stars

Press `D` for day mode and `N` for night mode.


## 🎯 Project Purpose

The purpose of this project is to demonstrate basic computer graphics concepts using OpenGL, including:

* 2D object drawing
* Geometric transformations
* Animation
* Scene composition
* Keyboard interaction
* Mouse interaction
* Color manipulation
* Moving objects

## 👤 Author

**Asiful Islam**

Course: Computer Graphics
University: American International University-Bangladesh (AIUB)

---

⭐ If you like the project, feel free to give the repository a star.
