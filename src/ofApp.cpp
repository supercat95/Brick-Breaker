#include "ofApp.h"
#include "Brick.hpp"

int state = 0;
Brick* brick = new Brick();

//--------------------------------------------------------------
ofApp::~ofApp()
{
    delete brick;
    brick = nullptr;
}

//--------------------------------------------------------------
void ofApp::setup()
{
    brick->initializePositions();
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
    gameState(state);
    
//    ofSetColor(255);
    // textSize(10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if (key == 'p')
    {
        
    }
}

//--------------------------------------------------------------
void ofApp::gameState(int state)
{
    switch(state)
    {
        case 0: // welcome screen
        {
            string welcome = "Welcome to Brick Breaker!";
            // text size
            // text align
            // text
            startButtons();
            state = instructionsOrPlay();
            break;
        }
        case 1: // instructions
        {
            // fill
            // text size
            // text
            startButtons();
            state = instructionsOrPlay();
            // strings
            break;
        }
        case 2: // play mode
        {
            brick->drawBricks();
            state = endScreen();
            break;
        }
        case 3: // pause mode
        {
            break;
        }
        case 4: // win/lose screen
        {
            state = endScreen();
            break;
        }
    }
}

//--------------------------------------------------------------
void ofApp::startButtons()
{
    
}

//--------------------------------------------------------------
int ofApp::instructionsOrPlay()
{
    
    return state = 2;
}

//--------------------------------------------------------------
int ofApp::pauseScreen()
{
    return state = 3;
}

//--------------------------------------------------------------
int ofApp::endScreen()
{
    
    return state;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
    if (key == 'p')
    {
        
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
