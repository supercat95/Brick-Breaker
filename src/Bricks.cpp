#include "Bricks.hpp"
#include "Ball.hpp"

Ball ballObject;

Bricks::Bricks(int xPos, int yPos, int width, int height, int brickState)
{
    this->xPos = xPos;
    this->yPos = yPos;
    this->width = width;
    this->height = height;
    this->brickState = brickState;
}

//--------------------------------------------------------------
void Bricks::initializePositions()
{
    for (int i = 0; i < xNum; i++)
    {
        xPos = i*width;
        brickPosition[i][0] = xPos;
        
        for (int j = 0; j < yNum; j++)
        {
            yPos = j*height;
            brickPosition[0][j] = yPos;
        }
    }
}

//--------------------------------------------------------------
void Bricks::set_xPos(int xPos)
{
    this->xPos = xPos;
}

int Bricks::get_xPos()
{
    return xPos;
}

//--------------------------------------------------------------
void Bricks::set_yPos(int yPos)
{
    this->yPos = yPos;
}

int Bricks::get_yPos()
{
    return yPos;
}

//--------------------------------------------------------------
void Bricks::set_brickState(int brickState)
{
    this->brickState = brickState;
}

int Bricks::get_brickState()
{
    return brickState;
}

//--------------------------------------------------------------
void Bricks::set_brickPosition(int brickPosition[xNum][yNum])
{
    this->brickPosition[xPos/width][yPos/height] = brickPosition[xPos/width][yPos/height];
}

ofVec2f Bricks::get_brickPosition()
{
    return ofVec2f(xPos/width, yPos/width);
//    return brickPosition[xPos][yPos];
}

//--------------------------------------------------------------
void Bricks::drawBricks(int brickState)
{
    for (int i = 0; i < xNum; i++)
    {
        for (int j = 0; j < yNum; j++)
        {
            switch (get_brickState())
            {
                case 2: // whole block
                {
                    ofPushMatrix();
                        ofSetColor(0); // black "stroke"
                        ofDrawRectangle(brickPosition[i][0], brickPosition[0][j], width, height);
                        ofSetColor(33, 150, 125); // seaweed green brick
                        ofDrawRectangle(brickPosition[i][0] + 1, brickPosition[0][j] + 1, width - 2, height -2);
                    ofPopMatrix();
                    break;
                }
                case 1: // damaged block
                {
                    ofPushMatrix();
                        ofSetColor(255, 0, 0); // BIND BROKEN TEXTURE HERE
                        ofDrawRectangle(brickPosition[ballObject.get_xPos()/width][0] + 1, brickPosition[0][ballObject.get_yPos()/height] + 1, width - 2, height -2);
                        // UNBIND BROKEN TEXTURE HERE
                    ofPopMatrix();
                    break;
                }
                case 0: // no block
                {
                    break;
                }
            }
        }
    }
    
    
    // CURSOR POSITION- verifies that block math is correct
    ofPushMatrix();
        ofSetColor(0,255,0);  // green
        ofDrawRectangle(brickPosition[int(ofGetMouseX()/width)][0], brickPosition[0][int(ofGetMouseY()/height)], width, height);
    ofPopMatrix();
}

//--------------------------------------------------------------
ofVec2f Bricks::getBrickPositionFromWorldPosition(int xPos, int yPos)
{
    return ofVec2f(int(xPos/width), int(yPos/height));
}









