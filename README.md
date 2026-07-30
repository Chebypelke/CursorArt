# 🎨 CursorArt

![License](https://img.shields.io/github/license/Chebypelke/CursorArt)
![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![PlatformIO](https://img.shields.io/badge/PlatformIO-Compatible-orange)
![Stars](https://img.shields.io/github/stars/Chebypelke/CursorArt)

🇺🇸 English | [🇷🇺 Русский](README_ru.md)

**CursorArt** is a lightweight C++ library for USB HID-capable Arduino boards that lets you move the mouse cursor along mathematical paths.

It provides a simple and clean API for drawing shapes and wave patterns using cursor movement.

---

## ✨ Features

- 🖱️ Control the mouse cursor via USB HID
- ⭕ Draw ellipses
- 🌀 Draw spirals
- 🌊 Generate sine wave paths
- 🌊 Generate cosine wave paths
- ⚡ Clean and easy-to-use API
- 🧩 Easily extensible with custom shapes

---

## 📦 Supported Boards

CursorArt only works with Arduino boards that support native USB HID.

Supported boards include:

- Arduino Leonardo
- Arduino Micro
- SparkFun Pro Micro
- Any ATmega32U4-based board

> **Note:** Standard Arduino Uno and Nano boards are **not supported** because they do not provide native USB HID functionality.

---

## 🚀 Installation

Clone the repository:

```bash
git clone https://github.com/Chebypelke/CursorArt.git
```

or place the library inside the `lib` directory of your PlatformIO project.

---

### 📚 [API](docs/en/API.md)

---

## 📂 Project Structure

```text
CursorArt/
├── include/
│   └── CursorArt.hpp
├── lib/
├── src/
│   ├── main.cpp
│   ├── Utils.cpp
│   └── Utils.hpp
├── examples/
└── platformio.ini
```

---

## ⚠️ Important

While running, CursorArt takes full control of your mouse cursor.

Before testing, it is recommended to:

- add a short delay in `setup()`;
- make sure you can quickly disconnect the board if needed;
- perform initial testing on a secondary computer or a virtual machine whenever possible.

---

## 🛠️ Built With

- C++17
- PlatformIO
- Arduino Framework
- USB HID
- Arduino Mouse Library

---

## 📌 Roadmap

### Completed

- [x] Ellipse
- [x] Spiral
- [x] Sine Wave
- [x] Cosine Wave

### Planned

- [X] Heart
- [ ] Star
- [ ] Lissajous Curve
- [X] Rose Curve
- [ ] Lemniscate of Bernoulli
- [ ] Custom trajectories
- [ ] Bézier curves

---

## 🤝 Contributing

Pull requests, suggestions, and feature ideas are always welcome.

Found a bug or have an idea for a new shape? Feel free to open an Issue.

---

## 📄 License

Released under the MIT License.

---

<div align="center">

**CursorArt** — Drawing with math, one cursor movement at a time.

</div>