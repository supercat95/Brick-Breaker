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
    
    void set_xPos(float xPos);
    int get_xPos();
    
    void set_yPos(float yPos);
    int get_yPos();
    
    int ballCollision();
};
