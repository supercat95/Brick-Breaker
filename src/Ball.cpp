#include "Ball.hpp"

Ball::Ball(int xPos, int yPos)
{
    this->xPos = xPos;
    this->yPos = yPos;
}

//--------------------------------------------------------------
void Ball::drawBall()
{
    ofPushMatrix();
        ofSetColor(17, 108, 255);
    
        ofSetCircleResolution(60);
        ofDrawCircle(xPos, yPos, zPos, radius);
    ofPopMatrix();
}

void Ball::updateBall()
{
    xPos -= 0;
    yPos -= 3;
}

//--------------------------------------------------------------
void Ball::set_xPos(int xPos)
{
    this->xPos = xPos;
}

int Ball::get_xPos()
{
    return xPos;
}

//--------------------------------------------------------------
void Ball::set_yPos(int yPos)
{
    this->yPos = yPos;
}

int Ball::get_yPos()
{
    return yPos;
}

//--------------------------------------------------------------
ofVec2f Ball::get_ballPosition(int xPos, int yPos)
{
    return ofVec2f(int(xPos), int(yPos));
}

//--------------------------------------------------------------
int Ball:: ballCollision()
{
    // if
    xPos *= -1;
    yPos *= -1;
}
