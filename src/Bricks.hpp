#include "ofApp.h"

#pragma once

typedef ofVec2f worldCoordinates;

class Bricks
{
private:
    int xPos, yPos;
    int width = 100, height = 60;
    static constexpr int xNum = 10, yNum = 8;
    int brickState = 2;
    
public:
    int brickPosition[xNum][yNum];
    
    Bricks() = default;
    Bricks(int xPos, int yPos, int width, int height, int brickState);
    
    void initializePositions();
    void drawBricks();
    
    void set_xPos(float xPos);
    int get_xPos();
    
    void set_yPos(float yPos);
    int get_yPos();
    
    void set_brickState(int brickState);
    int get_brickState();
    
    ofVec2f getBrickPositionFromWorldPosition(float xPos, float yPos);
};
