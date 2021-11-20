#include "Tree.h"

Mode2::Mode2()
{
    x = ofGetWidth() / 2;
    y = ofGetHeight() - 50;
    lenght = 200;
    degree = 30;
    n = 1;
}

void Mode2::draw()
{
    drawHelper(lenght, n, x, y, degree);
}

void Mode2::drawTree(int length, int n, int x, int y, int d)
{
    // ofSetColor(colors[n - n + 1]);
    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofSetColor(colors[ getDepth()  - n+1]);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length * 2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);

        drawTree(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawTree(length / 2, n - 1, middleX, middleY, 30);
        drawTree(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }
}

void Mode2::drawHelper(int length, int n, int x, int y, int d)
{
    drawTree(lenght, n, x, y, d);
    drawTree(lenght - 120, n, x - 350 , y, d);
    drawTree(lenght - 120, n, x + 350, y, d);
}
