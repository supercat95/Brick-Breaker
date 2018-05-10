#include "ofApp.h"

#pragma once

class Brick
{
private:
    float xPos, yPos;
    int width = 100, height = 60;
    static constexpr int xNum = 10, yNum = 8;
    int brickState[2], brickPosition[xNum][yNum];
    
public:
    Brick() = default;
    Brick(float xPos, float yPos, int width, int height);
    
    void initializePositions();
    void drawBricks();
    
    void set_xPos(float xPos);
    float get_xPos();
    
    void set_yPos(float yPos);
    float get_yPos();
    
};
