# CursorArt - API Documentation

🏠 Back to [README](../../README.md)

🇺🇸 English | [🇷🇺 Русский](../ru/API.md)

---

## 📑 Contents

- [Ellipse](#ellipse)
- [Spiral](#spiral)
- [Sine Wave](#sine-wave)
- [Cosine Wave](#cosine-wave)
- [Heart](#heart)
- [Rose Curve](#rose-curve)

---

## 📚 Available Functions

### Ellipse

```cpp
CursorArt::ellipse(width, height);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `width` | `int` | Defines the horizontal radius of the ellipse |
| `height` | `int` | Defines the vertical radius of the ellipse |

Example:

```cpp
CursorArt::ellipse(150, 75);
```

📄 **Full example:** [`examples/Ellipse.cpp`](../../examples/Ellipse.cpp)

> **Note:** To draw a perfect circle, use the same value for both `width` and `height`.

---

### Spiral

```cpp
CursorArt::spiral(scale, turns);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `scale` | `float` | Defines the expansion speed of the spiral and the distance between its turns |
| `turns` | `int` | Defines the number of full rotations before the spiral repeats |

Example:

```cpp
CursorArt::spiral(2, 15);
```

📄 **Full example:** [`examples/Spiral.cpp`](../../examples/Spiral.cpp)

---

### Sine Wave

```cpp
CursorArt::sinWave(maxPosition);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `maxPosition` | `int` | Defines the maximum horizontal movement range of the sine wave |

Example:

```cpp
CursorArt::sinWave(500);
```

📄 **Full example:** [`examples/SinWave.cpp`](../../examples/SinWave.cpp)

---

### Cosine Wave

```cpp
CursorArt::cosWave(maxPosition);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `maxPosition` | `int` | Defines the maximum horizontal movement range of the cosine wave |

Example:

```cpp
CursorArt::cosWave(500);
```

📄 **Full example:** [`examples/CosWave.cpp`](../../examples/CosWave.cpp)

---

### Heart

```cpp
CursorArt::heart(scale);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `scale` | `float` | Defines the size of the heart |

Example:

```cpp
CursorArt::heart(5.0f);
```

📄 **Full example:** [`examples/Heart.cpp`](../../examples/Heart.cpp)

---

### Rose Curve

```cpp
CursorArt::roseCurve(scale, petals);
```

| Parameter | Type | Description |
|----------|-----|----------|
| `scale` | `float` | Defines the size of the rose curve |
| `petals` | `int` | Defines the number of petals of the rose curve |

Example:

```cpp
CursorArt::roseCurve(100.0f, 5);
```

📄 **Full example:** [`examples/RoseCurve.cpp`](../../examples/RoseCurve.cpp)

> **Note:** If `petals` is odd, the number of petals equals `petals`. If `petals` is even, the result will contain `2 × petals` petals.

---