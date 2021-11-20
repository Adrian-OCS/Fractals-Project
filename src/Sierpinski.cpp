#include "Sierpinski.h"

Mode3::Mode3()
{
    x = ofGetWidth() / 3;
    y = 10; 
    n = 1; 
    size = ofGetHeight() / 2; 
}

void Mode3::draw()
{
    drawHelper(x,y,size,n);
}

void Mode3::drawHelper(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofSetColor(colors[ getDepth()  - n+1]);

    ofDrawTriangle(a, b, c);

    drawHelper(x, y, size / 2, n - 1);
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawHelper((c.x + a.x) / 2, (c.y + a.y) / 2, size / 2, n - 1);
}