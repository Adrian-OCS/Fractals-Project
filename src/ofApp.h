#pragma once
#include<cmath>

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void drawMode1(int x, int y, int n);
		void drawMode2(int length, int n, int x, int y, int d);
		void drawMode3(float x, float y, float size, int n);
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
		int depth = 1;
		bool active1 = false;
		bool active2 = false;
		bool active3 = false;
	private:
		char mode = '1';

	vector<ofColor> colors {
		ofColor::black,
        ofColor::aqua,
		ofColor::blanchedAlmond,
		ofColor::red,
		ofColor::yellow,
		ofColor::green,
		ofColor::darkSalmon,
		ofColor::lavender,
		ofColor::mediumSeaGreen
    };

};
