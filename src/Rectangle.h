#pragma once
#include "FractalMode.h"

class Mode1 : public FractalMode
{
public:
    Mode1();
    void draw();
    void drawHelper(int x, int y, int n);
};