//
//  lander.cpp
//  Project02
//
//  Created by Skylar So on 5/31/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#include "lander.h"
#include "uiDraw.h"
#include "game.h"


/****************************************
 * Function: draw()
 * Purpose: Draws the lander.
 ******************************************/
void Lander::draw()
{
    drawLander(lP);
}

/*********************************************
 * Function: applyGravity()
 * Purpose: Applys gravity to the lander.
 **********************************************/
float Lander::applyGravity(float gravity)
{
    gravity = 0.1;
    velocity.setDy(velocity.getDy() - 0.1);
    return gravity;
}

/***************************************
 * Function: applyThrustLeft()
 * Purpose: Moves lander to the right.
 *******************************************/
void Lander::applyThrustLeft()
{
    if (fuel > 0)
    {
        velocity.setDx(velocity.getDx() + 0.1);
        fuel = (fuel - 1);
        
        if (fuel <= 0)
        {
            setFuel(0);
        }
    }
}

/*********************************************
 * Function: applyThrustRight()
 * Purpose: Moves lander to the left.
 *****************************************/
void Lander::applyThrustRight()
{
    if (fuel > 0)
    {
        velocity.setDx(velocity.getDx() - 0.1);
        fuel = (fuel - 1);
        
        if (fuel <= 0)
        {
            setFuel(0);
        }
    }
}

/*******************************************
 * Function: applyThrustBottom()
 * Purpose: Moves the lander in an upward direction.
 ********************************************/
void Lander::applyThrustBottom()
{
    if (fuel > 1)
    {
        velocity.setDy(velocity.getDy() + 0.3);
        fuel = (fuel - 3);
        
        if (fuel <= 0)
        {
            setFuel(0);
        }
    }
}

/***********************************************
 * Function: advance()
 * Purpose: Advances the lander.
 *********************************************/
void Lander::advance()
{
    lP.addX(velocity.getDx());
    lP.addY(velocity.getDy());
}

/********************************************************
 * Function: reset()
 * Purpose: This resets the lander to a new random position.
 ***********************************************/
void Lander::reset()
{
    setAlive(true);
    setLanded(false);
    setFuel(500);
    setPoint(Point(150, 150));
    velocity.setDy(0);
    velocity.setDy(velocity.getDy() - 0.1);


}
