#pragma once
#include <cmath>

#include "ofMain.h"
#include "FractalMode.h"
#include "Rectangle.h"
#include "Tree.h"
#include "Sierpinski.h"
#include "Mode4Fractor.h"
#include "BonusFractal.h"
#include "Animation.h"

class ofApp : public ofBaseApp
{
public:
	//void drawMode4(float x, float y, int n, int d, int h);
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
private:
	Mode1 *rectangle;
	Mode2 *tree;
	Mode3 *sierpinski;
	Mode4 *mode4;
	BonusFractal *bonusFractal;
	std::vector<FractalMode*> fractals;
	Animation* animation; 
};
