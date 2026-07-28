# 🎨 CursorArt

**CursorArt** — это библиотека для Arduino Leonardo, Pro Micro и других плат с поддержкой USB HID, позволяющая перемещать курсор мыши по математическим траекториям.

Библиотека предоставляет простой API для рисования фигур и волн движением курсора.

---

## ✨ Возможности

- 🖱️ Управление курсором мыши через USB HID
- ⭕ Эллипс
- 🌀 Спираль
- 🌊 Синусоида
- 🌊 Косинусоида
- ⚡ Простой API
- 🧩 Легко расширяется новыми фигурами

---

## 📦 Поддерживаемые платы

Библиотека работает только с платами, поддерживающими USB HID.

Например:

- Arduino Leonardo
- Arduino Micro
- SparkFun Pro Micro
- ATmega32U4-based boards

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

## 📌 Планы развития

- [ ] Сердце
- [ ] Звезда
- [ ] Кривая Лиссажу
- [ ] Роза (Rose Curve)
- [ ] Лемниската Бернулли
- [ ] Параметрические кривые
- [ ] Пользовательские траектории
- [ ] Настройка скорости движения
- [ ] Поддержка Bezier-кривых

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