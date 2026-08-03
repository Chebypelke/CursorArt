# 🎨 CursorArt

![License](https://img.shields.io/github/license/Chebypelke/CursorArt)
![C++](https://img.shields.io/badge/C%2B%2B-11%2B-blue)
![PlatformIO](https://img.shields.io/badge/PlatformIO-Compatible-orange)
![Stars](https://img.shields.io/github/stars/Chebypelke/CursorArt)

[🇷🇺 Русский](README_ru.md) | 🇺🇸 English

**CursorArt** is a C++ library for USB HID-capable Arduino platforms that allows you to control the mouse cursor and draw mathematical trajectories.

The library provides a simple API for creating mathematical trajectories using cursor movement.

---

## ✨ Features

- 🖱️ Mouse control via USB HID
- 📐 Mathematical trajectory generation
- ⚡ Simple and easy-to-use API

---

## 📦 Supported Boards

The library works only with boards that support USB HID.

Supported boards:

- Arduino Leonardo
- Arduino Micro
- SparkFun Pro Micro
- Any board based on `ATmega32U4` with hardware USB HID support

> Arduino Uno is not supported.

---

## 🚀 Installation

### Method 1:

Add the library to your `platformio.ini`:

```ini
lib_deps =
    Chebypelke/CursorArt
```

### Method 2:

Clone the repository:

```bash
git clone https://github.com/Chebypelke/CursorArt.git
```

or place the library into the `lib` folder of your PlatformIO project.

---

### 📚 [API](docs/API.md)

---

## ⚠️ Important

During operation, the library has full control over the mouse cursor.

Recommended:

- Add a small delay in `setup()`;
- Have a way to quickly disconnect the device;
- Test first in a virtual machine or on a secondary computer.

---

## 🛠️ Technologies Used

- C++ 11+
- PlatformIO
- Arduino Framework
- USB HID
- Arduino Mouse Library

---

## 📌 Roadmap

### Completed

- [x] Ellipse
- [x] Spiral
- [x] Sine wave
- [x] Cosine wave
- [x] Heart
- [x] Rose

### Planned

- [ ] Star
- [ ] Lissajous curve
- [ ] Bernoulli lemniscate
- [ ] Custom trajectories
- [ ] Bezier curves

---

## 🤝 Contributing

Pull Requests and suggestions are welcome.

If you find a bug or want to suggest a new shape, create an Issue.

---

## 📄 License

MIT License.

---

<div align="center">

**CursorArt** — drawing with mathematics using the mouse cursor.

</div>