#pragma once
#include "FractalMode.h"

class Mode3 : public FractalMode
{
private:
    int size;
public:
    Mode3(); 
    void draw();
    void drawHelper(float x, float y, float size, int n);
};