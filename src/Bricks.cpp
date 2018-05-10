#include "Brick.hpp"

Brick::Brick(float xPos, float yPos, int width, int height)
{
    this->xPos = xPos;
    this->yPos = yPos;
    this->width = width;
    this->height = height;
}

//--------------------------------------------------------------
void Brick::initializePositions()
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
void Brick::set_xPos(float xPos)
{
    this->xPos = xPos;
}

float Brick::get_xPos()
{
    return xPos;
}

//--------------------------------------------------------------
void Brick::set_yPos(float yPos)
{
    this->yPos = yPos;
}

float Brick::get_yPos()
{
    return yPos;
}

//--------------------------------------------------------------
void Brick::drawBricks()
{
    
    
    for (int i = 0; i < xNum; i++)
    {
        for (int j = 0; j < yNum; j++)
        {
            ofSetColor(0); // black "stroke"
            ofDrawRectangle(brickPosition[i][0], brickPosition[0][j], width, height);
            ofSetColor(33, 150, 125); // seaweed green brick
            ofDrawRectangle(brickPosition[i][0] + 1, brickPosition[0][j] + 1, width - 2, height -2);
        }
    }
}
