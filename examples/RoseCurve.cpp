#include "CursorArt.hpp"
#include <Arduino.h>
#include <Mouse.h>

void setup() {
    delay(5000);
    Mouse.begin();
}

void loop() {
    CursorArt::roseCurve(100.0f, 5);

    delay(10);
}