#include "CursorArt.hpp"
#include "Utils.hpp"
#include "MathUtils.hpp"
#include <Arduino.h>

constexpr float ANGLE_STEP = 0.1f;
constexpr int AMPLITUDE = 50;
constexpr auto BASE_SPEED = 2;
constexpr int RIGHT = 1;
constexpr int LEFT = -1;
float angle = 0.0f;
int direction = RIGHT;
int positionX = 0;

void CursorArt::ellipse(int width, int height)
{
    angleNormalize(angle, TWO_PI);

    const auto newX = width * Math::cosFloat(angle); 
    const auto newY = height * Math::sinFloat(angle);
    
    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::spiral(float scale, int turns)
{
    const auto maxAngle = turns * TWO_PI;

    angleNormalize(angle, maxAngle);

    const auto newX = scale * angle * Math::cosFloat(angle);
    const auto newY = scale * angle * Math::sinFloat(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::sinWave(int max_position)
{
    angleNormalize(angle, TWO_PI);

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
    const auto newY = AMPLITUDE * Math::sinFloat(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::cosWave(int max_position) // ConWave is a full copy of SinWave (difference in a single line), maybe I'll fix it.
{
    angleNormalize(angle, TWO_PI); 

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
    const auto newY = AMPLITUDE * Math::cosFloat(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}

void CursorArt::heart(float scale)
{
    angleNormalize(angle, TWO_PI);

    const auto newX = scale * 16 * Math::cube(Math::sinFloat(angle));
    const auto newY = scale * (
        13 * Math::cosFloat(angle) - 
        5 * Math::cosFloat(2 * angle) - 
        2 * Math::cosFloat(3 * angle) - 
        Math::cosFloat(4 * angle)
    );

    moveMouseTo(newX, -newY);
    angle += ANGLE_STEP;
}

void CursorArt::roseCurve(float scale, int petals)
{
    angleNormalize(angle, TWO_PI);

    const auto radius = scale * Math::cosFloat(petals * angle);
    const auto newX = radius * Math::cosFloat(angle);
    const auto newY = radius * Math::sinFloat(angle);

    moveMouseTo(newX, newY);
    angle += ANGLE_STEP;
}