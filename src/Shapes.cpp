#include "CursorArt.hpp"
#include "MouseDraw.hpp"
#include <Arduino.h>

constexpr float ANGLE_STEP = 0.1f;
constexpr int AMPLITUDE = 50;
constexpr auto BASE_SPEED = 2;
constexpr int RIGHT = 1;
constexpr int LEFT = -1;
float angle = 0.0f;
int direction = RIGHT;
float oldMouseX = 0.0f;
float oldMouseY = 0.0f;
int positionX = 0;

void ellipse(int width, int height)
{
    if (angle >= TWO_PI) 
    {  
        angle -= TWO_PI;
    }

    const auto newX = width * cos(angle);
    const auto newY = height * sin(angle);
    
    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::spiral(float scale, int turns)
{
    const auto maxAngle = turns * TWO_PI;

    if (angle >= maxAngle)
    {
        angle -= maxAngle;
    }

    const auto newX = scale * angle * cos(angle);
    const auto newY = scale * angle * sin(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::sinWave(int max_position)
{
    if (angle >= TWO_PI) 
    {  
        angle -= TWO_PI;
    }

    positionX += direction * BASE_SPEED;

    if (positionX >= max_position)
    {   
        direction = LEFT;
    }
    else if (positionX <= -max_position)
    {
        direction = RIGHT;
    }

    const auto newX = positionX;
    const auto newY = AMPLITUDE * sin(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::cosWave(int max_position) // ConWave is a full copy of SinWave (difference in a single line), maybe I'll fix it.
{
    if (angle >= TWO_PI) 
    {  
        angle -= TWO_PI;
    }

    positionX += direction * BASE_SPEED;

    if (positionX >= max_position)
    {   
        direction = LEFT;
    }
    else if (positionX <= -max_position)
    {
        direction = RIGHT;
    }

    const auto newX = positionX;
    const auto newY = AMPLITUDE * cos(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::heart(float scale)
{
    if (angle >= TWO_PI) 
    {  
        angle -= TWO_PI;
    }

    const auto newX = scale * 16 * pow(sin(angle), 3);
    const auto newY = scale * (
        13 * cos(angle) - 
        5 * cos(2 * angle) - 
        2 * cos(3 * angle) - 
        cos(4 * angle)
    );

    moveMouseTo(newX, -newY);
    angle += ANGLE_STEP;
}

void CursorArt::roseCurve(float scale, int petals)
{
    if (angle >= TWO_PI) 
    {  
        angle -= TWO_PI;
    }

    const auto radius = scale * cos(petals * angle);
    const auto newX = radius * cos(angle);
    const auto newY = radius * sin(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}