#include "ofApp.h"
#include "Bricks.hpp"
#include "Ball.hpp"

#include <iostream>
using std::cout;

Bricks* bricks = new Bricks();
Ball* ball = new Ball();

//--------------------------------------------------------------
ofApp::~ofApp()
{
    delete bricks;
    bricks = nullptr;
    
    delete ball;
    ball = nullptr;
}

//--------------------------------------------------------------
void ofApp::setup()
{
    bricks->initializePositions();
}

//--------------------------------------------------------------
void ofApp::update()
{
    if (state == 2)
    {
        ball->updateBall();
    
        if (ball->get_xPos() > bricks->get_xPos()/100
            && ball->get_xPos() < bricks->get_xPos()/100 +100)
        {
            bricks->set_brickState(1);
            //cout << "yup!" << endl;
        }
    }
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
            bricks->drawBricks();
            ball->drawBall();
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
    
    return state; // 4
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
