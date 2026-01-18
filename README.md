# Computer Graphics Lab

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Compiler](https://img.shields.io/badge/Compiler-TDM--GCC%2032--bit-green)
![Graphics](https://img.shields.io/badge/Graphics-graphics.h%20(WinBGIm)-orange)
![Platform](https://img.shields.io/badge/Platform-Windows%2010%2F11-lightgrey)
![Purpose](https://img.shields.io/badge/Purpose-Academic%20Lab-informational)

A structured collection of **Computer Graphics laboratory programs** implemented in **C++** using the **graphics.h (WinBGIm)** library.  
This repository follows standard **University level Computer Graphics Lab** and focuses on fundamental raster graphics algorithms.

---

## 📘 Introduction

Computer Graphics deals with the generation, representation, and manipulation of images using computers.  
This repository provides **low-level algorithmic implementations** of classic graphics techniques to help students understand:

- Pixel-based rasterization
- Decision parameter logic
- Computational efficiency in graphics rendering

All programs are compiled and tested using **TDM-GCC 32-bit**, ensuring compatibility with legacy `graphics.h` environments commonly used in academic labs.

---

## 🧪 Implemented Algorithms

Each algorithm is implemented as a **standalone C++ program** and follows a consistent structure.

### 🔹 1. DDA Line Drawing Algorithm
**Concept:** Incremental line generation using floating-point arithmetic.

- Demonstrates slope-based plotting
- Simple but computationally less efficient
- Suitable for introductory understanding

📂 Location: [`Source Code/DDA_Line.cpp`](Source%20Code/DDA_Line.cpp)

---

### 🔹 2. Bresenham Line Drawing Algorithm
**Concept:** Integer-based line drawing using decision parameters.

- Faster than DDA
- No floating-point operations
- Widely used in raster systems

📂 Location: [`Source Code/Bresenham_Line.cpp`](Source%20Code/Bresenham_Line.cpp)

---

### 🔹 3. Bresenham Circle Drawing Algorithm
**Concept:** Efficient circle drawing using symmetry and integer calculations.

- Uses eight-way symmetry
- Optimized decision logic
- High performance

📂 Location: [`Source Code/Bresenham_Circle.cpp`](Source%20Code/Bresenham_Circle.cpp)

---

### 🔹 4. Midpoint Circle Drawing Algorithm
**Concept:** Determines pixel positions by evaluating midpoint decisions.

- Improved numerical stability
- Accurate raster circle generation

📂 Location: [`Source Code/Midpoint_Circle.cpp`](Source%20Code/Midpoint_Circle.cpp)

---

### 🔹 5. Midpoint Ellipse Drawing Algorithm
**Concept:** Ellipse drawing using region-based midpoint evaluation.

- Divides ellipse into two regions
- Handles major and minor axes efficiently

📂 Location: [`Source Code/Midpoint_Ellipse.cpp`](Source%20Code/Midpoint_Ellipse.cpp)

---

### 🔹 6. Liang–Barsky Line Clipping Algorithm
**Concept:** Parametric line clipping against a rectangular window.

- Faster than Cohen–Sutherland
- Minimizes intersection calculations
- Uses parametric equations

📂 Location: [`Source Code/Liang–Barsky.cpp`](Source%20Code/Liang%E2%80%93Barsky.cpp)

---

## 📁 Repository Structure



```bash
  ├── Config/
  │ └── graphics.h, winbgim.h, libbgi.a
  ├── Source Code/
  │ └── Algorithm implementations in C++
  ├── Outputs/
  │ └── Program output screenshots
  ├── Resources/
  │ └── Reference materials and notes
  ├── requirements.txt
  └── README.md
```

---

## ⚙️ Requirements

- Operating System: Windows 10 / 11  
- Compiler: **TDM-GCC 32-bit**
- Language: C++
- Graphics Library: `graphics.h` (WinBGIm)

Detailed setup steps are provided in `requirements.txt`.

---

## 🛠 Compilation Example

```sh
g++ "Source Code/filename.cpp" -o filename.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

```

---

## 🎓 Educational Use

This repository is intended for:
- Computer Graphics laboratory coursework
- Viva and exam preparation
- Understanding classic raster graphics algorithms

---

## 👤 Author

**Riduan Aziz**

---

## 📜 License

This repository is intended for educational use.

---
