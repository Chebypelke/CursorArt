#pragma once

/*
    The main include file for using the library.

    CursorArt - a lightweight C++ library for drawing mathematical cursor trajectories on USB HID capable Arduino boards.
    License - MIT
    Author - Chebypela( https://github.com/Chebypelke )
*/

namespace CursorArt {
    void ellipse(int width, int height);
    void spiral(float scale, int turns);
    void sinWave(int max_position);
    void cosWave(int max_position);
    void heart(float scale);
    void roseCurve(float scale, int petals);
}