#include "CursorArt.hpp"
#include <Arduino.h>
#include <Mouse.h>

void setup() {
    delay(5000);
    Mouse.begin();
}

void loop() {
    CursorArt::heart(10);

    delay(10);
}

