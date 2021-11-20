#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    rectangle = new Mode1();
    tree = new Mode2();
    sierpinski = new Mode3();
    fractals.push_back(rectangle);
    fractals.push_back(tree);
    fractals.push_back(sierpinski);
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for (FractalMode* f : fractals)
    {
        if (f->getActivate())
        {
            f->draw(); 
        }
    }
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
        //mode = '4';
        //active4 = !active4;
        break;
    case '-':
        for(FractalMode* f : fractals) if(f->getDepth() > 0) f->setDepth(f->getDepth() - 1 );
        break;
    case '=':
        for(FractalMode* f : fractals) if(f->getDepth() <= 7) f->setDepth(f->getDepth() + 1 );
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