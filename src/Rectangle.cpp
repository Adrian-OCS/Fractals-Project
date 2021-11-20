#include "Rectangle.h"

Mode1::Mode1()
{
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    n = 1;
}

void Mode1::draw()
{
    drawHelper(x, y, n);
}
void Mode1::drawHelper(int x, int y, int n)
{
    if (n != 0)
    {
        ofSetColor(colors[ getDepth()  - n+1]);
        ofDrawRectangle(x - 50, y - 20, 97, 97);

        drawHelper(x + 100, y, n - 1);
        drawHelper(x - 100, y, n - 1);
        drawHelper(x, y + 100, n - 1);
        drawHelper(x, y - 100, n - 1);
    }
}