#include "CursorArt.hpp"
#include <Arduino.h>
#include <Mouse.h>

void setup() {
    delay(5000);
    Mouse.begin();
}

void loop() {
    // CursorArt::ellipse(250, 250); // Perfect Circle

    CursorArt::ellipse(250, 150); // Ellipse
    delay(10);
}