# CursorArt - API Documentation

---

## 📚 Available Functions

### Ellipse

```cpp
CursorArt::ellipse(width, height);
```

| Parameter | Type | Description |
|-----------|------|-------------|
| `width` | `int` | Defines the horizontal radius of the ellipse |
| `height` | `int` | Defines the vertical radius of the ellipse |

Example:

```cpp
CursorArt::ellipse(150, 75);
```

---

### Spiral

```cpp
CursorArt::spiral(scale, turns);
```

| Parameter | Type | Description |
|-----------|------|-------------|
| `scale` | `float` | Controls the spiral's expansion rate and the spacing between its turns |
| `turns` | `int` | Specifies the number of full rotations before the spiral restarts |

Example:

```cpp
CursorArt::spiral(2, 15);
```

---

### Sine Wave

```cpp
CursorArt::sinWave(maxPosition);
```

| Parameter | Type | Description |
|-----------|------|-------------|
| `maxPosition` | `int` | Defines the maximum horizontal travel distance of the sine wave |

Example:

```cpp
CursorArt::sinWave(500);
```

---

### Cosine Wave

```cpp
CursorArt::cosWave(maxPosition);
```

| Parameter | Type | Description |
|-----------|------|-------------|
| `maxPosition` | `int` | Defines the maximum horizontal travel distance of the cosine wave |

Example:

```cpp
CursorArt::cosWave(500);
```

---