#pragma once
#include "ofMain.h"

class FractalMode
{
public:
    virtual void draw() = 0;
    bool getActivate() { return activate; };
    void setActivate(bool x) { activate = x; };
    int getDepth() { return n; };
    void setDepth(int n) { this->n = n; };
protected:
    bool activate = false;
    int x;
    int y;
    int n; 
    vector<ofColor> colors{
        ofColor::black,
        ofColor::red,
        ofColor::aqua,
        ofColor::blue,
        ofColor::yellow,
        ofColor::purple,
        ofColor::orange,
        ofColor::green,
        ofColor::maroon

    };
};
