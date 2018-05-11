#pragma once

#include "ofMain.h"
#include <vector>

class ofApp : public ofBaseApp
{
    int state = 0;
    
	public:
        ~ofApp();
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
        void gameState(int state);
        void startButtons();
        int instructionsOrPlay();
        int pauseScreen();
        int endScreen();
    
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
