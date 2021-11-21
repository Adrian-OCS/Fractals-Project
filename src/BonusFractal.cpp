#include "BonusFractal.h"

BonusFractal::BonusFractal()
{
    x = ofGetWidth() / 2 - 200;
    y = ofGetHeight() / 2 - 50;
    size = 100;
    n = 4;
}

void BonusFractal::draw()
{
    ofRotateY(30);
    drawHelper(x, y, n, size);
    ofRotateY(-30);
}

void BonusFractal::drawHelper(int x, int y, int n, int size)
{

    if (n == 0)
    {
        return;
    }

    ofSetColor(colors[n]);
    ofDrawBox(x, y, 500, size, size, size);
    drawHelper(x + size / 4, y - size, n - 1, size / 2);
    drawHelper(x - size, y + size, n - 1, size / 2);
    drawHelper(x + size * 2 - size / 2, y + size, n - 1, size / 2);
}