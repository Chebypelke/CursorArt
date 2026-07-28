# 🎨 CursorArt

🇷🇺 Русский | [🇺🇸 English](README.md)

**CursorArt** — библиотека на C++ для Arduino-плат с поддержкой USB HID, позволяющая управлять курсором мыши и рисовать математические траектории.

Библиотека предоставляет простой API для рисования фигур и волн движением курсора.

---

## ✨ Возможности

- 🖱️ Управление курсором через USB HID
- ⭕ Рисование эллипсов
- 🌀 Рисование спиралей
- 🌊 Синусоидальные траектории
- 🌊 Косинусоидальные траектории
- ⚡ Простой и понятный API
- 🧩 Простое добавление новых фигур

---

## 📦 Поддерживаемые платы

Библиотека работает только с платами, поддерживающими USB HID.

Поддерживаются следующие платы:

- Arduino Leonardo
- Arduino Micro
- SparkFun Pro Micro
- Любые платы на базе ATmega32U4

> Обычный Arduino Uno не поддерживается.

---

## 🚀 Установка

Склонируйте проект:

```bash
git clone https://github.com/USERNAME/CursorArt.git
```

или поместите библиотеку в папку `lib` вашего проекта PlatformIO.

---

## 📖 Использование

```cpp
#include <Arduino.h>
#include <Mouse.h>
#include <CursorArt.hpp>

void setup()
{
    delay(5000); // время убрать руки с мыши
    Mouse.begin();
}

void loop()
{
    CursorArt::cosWave(500);
    delay(10);
}
```

---

## 📚 Доступные функции

### Эллипс

```cpp
CursorArt::ellipse(width, height);
```

Пример:

```cpp
CursorArt::ellipse(150, 75);
```

---

### Спираль

```cpp
CursorArt::spiral(scale, turns);
```

Пример:

```cpp
CursorArt::spiral(2, 15);
```

---

### Синусоида

```cpp
CursorArt::sinWave(maxPosition);
```

Пример:

```cpp
CursorArt::sinWave(500);
```

---

### Косинусоида

```cpp
CursorArt::cosWave(maxPosition);
```

Пример:

```cpp
CursorArt::cosWave(500);
```

---

## 📂 Структура проекта

```
CursorArt/
├── include/
    └── CursorArt.hpp
├── lib/
├── src/
│   ├── CursorArt.cpp
│   ├── MouseDraw.cpp
│   └── MouseDraw.hpp
├── examples/
└── platformio.ini
```

---

## ⚠️ Важно

Во время работы библиотека полностью управляет курсором мыши.

Рекомендуется:

- добавить небольшую задержку в `setup()`;
- подготовить возможность быстро отключить устройство;
- тестировать сначала на виртуальной машине или запасном компьютере.

---

## 🛠️ Используемые технологии

- C++17
- PlatformIO
- Arduino Framework
- USB HID
- Arduino Mouse Library

---

## 📌 Roadmap

### Готово

- [x] Эллипс
- [x] Спираль
- [x] Синусоида
- [x] Косинусоида

### Планируется

- [ ] Сердце
- [ ] Звезда
- [ ] Кривая Лиссажу
- [ ] Роза
- [ ] Лемниската Бернулли
- [ ] Пользовательские траектории
- [ ] Bezier-кривые

---

## 🤝 Вклад в проект

Pull Request'ы и предложения приветствуются.

Если нашли ошибку или хотите предложить новую фигуру — создайте Issue.

---

## 📄 Лицензия

MIT License.

---

<div align="center">

**CursorArt** — рисование математикой с помощью курсора мыши.

</div>