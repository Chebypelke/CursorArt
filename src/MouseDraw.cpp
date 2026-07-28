#include "MouseDraw.hpp"
#include <Mouse.h>

namespace
{
    float oldMouseX = 0.0f;
    float oldMouseY = 0.0f;
}

void moveMouseTo(int newX, int newY)
{
    const auto moveX = static_cast<int>(newX - oldMouseX);
    const auto moveY = static_cast<int>(newY - oldMouseY);

    Mouse.move(moveX, moveY);
    oldMouseX = newX;
    oldMouseY = newY;
}