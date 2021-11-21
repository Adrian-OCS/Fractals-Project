#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    rectangle = new Mode1();
    tree = new Mode2();
    sierpinski = new Mode3();
    mode4 = new Mode4();
    animation = new Animation({rectangle, tree, sierpinski,mode4}, 20);
    fractals.push_back(rectangle);
    fractals.push_back(tree);
    fractals.push_back(sierpinski);
    fractals.push_back(mode4); 
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);
    animation->tick();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for (FractalMode *x : fractals)
    {
        if (x->getActivate())
        {
            x->draw();
        }
    }
    animation->draw();
}

// if (active4)
// {
//     drawMode4(ofGetWidth()/8, ofGetHeight()*0.8, depth, 800, 100);
// }

// void ofApp::drawMode4(float x, float y, int n, int d, int h){

//     if (n!=0){

//         ofSetColor(colors[depth - n + 1]);

//         ofDrawLine(x, y, x+d, y);
//         ofDrawLine(x+d, y, x+d, y-h);
//         ofDrawLine(x+d, y-h, x, y-h);
//         ofDrawLine(x, y-h, x, y-(h*2));

//         drawMode4(x, y-(h*2), n-1, d/2, h/2);

//     }

// }
//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        fractals[0]->setActivate(!fractals[0]->getActivate());
        break;
    case '2':
        fractals[1]->setActivate(!fractals[1]->getActivate());
        break;
    case '3':
        fractals[2]->setActivate(!fractals[2]->getActivate());
        break;
    case '4':
        fractals[3]->setActivate(!fractals[3]->getActivate());
        break;
    case '-':
        for (FractalMode *x : fractals)
        {
            if (x->getDepth() > 0)
            {

                x->setDepth(x->getDepth() - 1);
            }
        }
        break;
    case '=':
        for (FractalMode *x : fractals)
        {
            if (x->getDepth() <= 7)
            {
                x->setDepth(x->getDepth() + 1);
            }
        }
        break;
    case 'c':
        animation->setActivate(false);
        for (FractalMode *x : animation->getFractals())
        {
            x->setDepth(5);
        }
        break;

        // FALTA HACER QUE SOLO HAGA LA ANIMACION A EL FRACTAL QUE ESTE ACTIVADO

    case ' ':
        if (animation->getActivate() == false)
        {
            animation->setActivate(true);
            for (FractalMode *x : animation->getFractals())
            {
                x->setDepth(0);
            }
        }
        break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}