#pragma once
#include "ofMain.h"
#include "FractalMode.h"

class Animation
{
private:
    int speed;
    int timer = 0;
    bool nIncrease = true;
    bool onOrOff = false;
    vector<FractalMode *> fractals;

public:
    Animation(vector<FractalMode *> fractals, int speed);
    vector<FractalMode *> getFractals() { return fractals; };
    void tick();
    void draw();
    bool getActivate() { return onOrOff; };
    void setActivate(bool x) { onOrOff = x; };
};