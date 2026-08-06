# 🎨 CursorArt

![License](https://img.shields.io/github/license/Chebypelke/CursorArt)
![C++](https://img.shields.io/badge/C%2B%2B-11%2B-blue)
[![PlatformIO Registry](https://badges.registry.platformio.org/packages/chebypelke/library/CursorArt.svg)](https://registry.platformio.org/libraries/chebypelke/CursorArt)
![Stars](https://img.shields.io/github/stars/Chebypelke/CursorArt)

🇷🇺 Русский | [🇺🇸 English](README.md)

**CursorArt** — библиотека на C++ для Arduino-платформ с поддержкой USB HID, позволяющая управлять курсором мыши и рисовать математические траектории.

Библиотека предоставляет простой API для рисования математических траекторий движением курсора.

---

## ✨ Возможности

- 🖱️ Управление курсором через USB HID
- 📐 Создание математических траекторий
- ⚡ Простой и понятный API

---

## 📦 Поддерживаемые платы

Библиотека работает только с платами, поддерживающими USB HID.

Поддерживаются следующие платы:

- Arduino Leonardo
- Arduino Micro
- SparkFun Pro Micro
- Любые платы на базе `ATmega32U4` с аппаратной поддержкой USB HID

> Обычный Arduino Uno не поддерживается.

---

## 🚀 Установка

### Способ 1:

Добавьте библиотеку в `platformio.ini`

```ini
lib_deps =
    Chebypelke/CursorArt
```

### Способ 2:

Склонируйте проект:

```bash
git clone https://github.com/Chebypelke/CursorArt.git
```

или поместите библиотеку в папку `lib` вашего проекта `PlatformIO`.

---

### 📚 [API](docs/ru/API.md)

---

## ⚠️ Важно

Во время работы библиотека полностью управляет курсором мыши.

Рекомендуется:

- добавить небольшую задержку в `setup()`;
- подготовить возможность быстро отключить устройство;
- тестировать сначала на виртуальной машине или запасном компьютере.

---

## 🛠️ Используемые технологии

- C++ 11+
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
- [x] Сердце
- [x] Роза

### Планируется

- [ ] Звезда
- [ ] Кривая Лиссажу
- [ ] Лемниската Бернулли
- [ ] Пользовательские траектории
- [ ] Кривые Безье

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