#include "CursorArt.hpp"
#include <Arduino.h>
#include <Mouse.h>

// Nothing...

void setup() 
{
    delay(5000);
    Mouse.begin();
}

void loop() 
{
    CursorArt::roseCurve(10.0f, 5);
}
