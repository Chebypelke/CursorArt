#include "CursorArt.hpp"
#include <Arduino.h>
#include <Mouse.h>

void setup() {
    delay(5000);
    Mouse.begin();
}

void loop() {
    CursorArt::cosWave(500);

    delay(10);
}