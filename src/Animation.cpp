#include "Animation.h"

Animation::Animation(vector<FractalMode *> fractals, int speed)
{
    this->speed = speed;
    this->fractals = fractals;
}

void Animation::tick()
{
    if (onOrOff)
    {
        timer++;
        if (timer == speed)
        {
            timer = 0;

            if (fractals[0]->getDepth() == 6)
            {
                nIncrease = false;
            }
            else if (fractals[0]->getDepth() == 0)
            {
                nIncrease = true;
            }

            for (FractalMode *f : fractals)
            {
                if (nIncrease)
                {
                    f->setDepth(f->getDepth() + 1);
                }
                else
                {
                    f->setDepth(f->getDepth() - 1);
                }
            }
        }
    }
}

void Animation::draw()
{
    if (onOrOff)
    {
        for (FractalMode *x : fractals)
        {
            x->draw();
        }
    }
}