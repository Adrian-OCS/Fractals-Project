#pragma once
#include "FractalMode.h"

class Mode2 : public FractalMode
{
private:
    int degree;
    int lenght;
public:
    Mode2(); 
    void draw();
    void drawHelper(int length, int n, int x, int y, int d);
    void drawTree(int length, int n, int x, int y, int d);
};