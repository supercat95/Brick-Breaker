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
void Ball::set_xPos(float xPos)
{
    this->xPos = xPos;
}

int Ball::get_xPos()
{
    return xPos;
}

//--------------------------------------------------------------
void Ball::set_yPos(float yPos)
{
    this->yPos = yPos;
}

int Ball::get_yPos()
{
    return yPos;
}

//--------------------------------------------------------------
int Ball:: ballCollision()
{
    // if
    xPos *=(ofRandom(-1,-.7));
    yPos *=(ofRandom(-1,-.7));
}
