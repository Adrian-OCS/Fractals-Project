#include "Mode4Fractor.h"

Mode4::Mode4()
{
    x = ofGetWidth() / 8;
    y = ofGetHeight() * 0.8;
    d = 800;
    h = 100;
    n = 1;
}

void Mode4::draw()
{
    drawHelper(x, y, n, d, h);
}

void Mode4::drawHelper(float x, float y, int n, int d, int h)
{

    if (n != 0)
    {

        ofSetColor(colors[getDepth() - n + 1]);

        ofDrawLine(x, y, x + d, y);
        ofDrawLine(x + d, y, x + d, y - h);
        ofDrawLine(x + d, y - h, x, y - h);
        ofDrawLine(x, y - h, x, y - (h * 2));

        drawHelper(x, y - (h * 2), n - 1, d / 2, h / 2);
    }
}