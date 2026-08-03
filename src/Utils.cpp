#include "Utils.hpp"
#include <Mouse.h>

namespace
{
    float oldMouseX = 0.0f;
    float oldMouseY = 0.0f;
}

void moveMouseTo(float newX, float newY)
{
    const auto moveX = static_cast<int>(newX - oldMouseX);
    const auto moveY = static_cast<int>(newY - oldMouseY);

    Mouse.move(moveX, moveY);
    oldMouseX = newX;
    oldMouseY = newY;
}

void angleNormalize(float& angle, float max_angle)
{
    while (angle >= max_angle)
    {
        angle -= max_angle;
    }
}