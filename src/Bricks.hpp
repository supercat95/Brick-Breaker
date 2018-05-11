#include "ofApp.h"

#pragma once

typedef ofVec2f worldCoordinates;

class Bricks
{
private:
    int xPos, yPos;
    int width = 100, height = 60;
    static constexpr int xNum = 10, yNum = 8;
    int brickState = 2, brickPosition[xNum][yNum];
    
public:
    Bricks() = default;
    Bricks(int xPos, int yPos, int width, int height, int brickState);
    
    void initializePositions();
    void drawBricks(int brickState);
    
    void set_xPos(int xPos);
    int get_xPos();
    
    void set_yPos(int yPos);
    int get_yPos();
    
    void set_brickState(int brickState);
    int get_brickState();
    
    void set_brickPosition(int brickPosition[xNum][yNum]);
    ofVec2f get_brickPosition();
    
    ofVec2f getBrickPositionFromWorldPosition(int xPos, int yPos);
};
