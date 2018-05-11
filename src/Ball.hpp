#include "ofApp.h"
#pragma once

class Ball
{
private:
    int radius = 20, xPos = int(ofRandom(radius, 980)), yPos = 980, zPos = 0, theta = 1;
    ofPoint object;
    
public:
    Ball() = default;
    Ball(int xPos, int yPos);
    
    void drawBall();
    void updateBall();
    
    void set_xPos(int xPos);
    int get_xPos();
    
    void set_yPos(int yPos);
    int get_yPos();
    
    ofVec2f get_ballPosition(int xPos, int yPos);
    
    int ballCollision();
};
