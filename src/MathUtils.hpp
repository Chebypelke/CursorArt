#pragma once

#include <Arduino.h>

namespace Math
{
    inline float cosFloat(float angle)
    {
        return static_cast<float>(cos(angle));
    }

    inline float sinFloat(float angle)
    {
        return static_cast<float>(sin(angle));
    }

    inline float square(float value)
    {
        return value * value;
    }

    inline float cube(float value)
    {
        return value * value * value;
    }
}
