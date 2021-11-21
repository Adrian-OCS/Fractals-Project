#pragma once
#include "FractalMode.h"

class Mode4 : public FractalMode
{
private:
    int d;
    int h;

public:
    Mode4();
    void draw();
    void drawHelper(float x, float y, int n, int d, int h);
};