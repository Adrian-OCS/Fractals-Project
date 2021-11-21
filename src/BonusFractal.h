#pragma once
#include "FractalMode.h"

class BonusFractal : public FractalMode{
    private:
        int size;
    public:
        BonusFractal();
        void draw();
        void drawHelper(int x, int y, int n, int size);
};