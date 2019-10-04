//
//  lander.h
//  Project02
//
//  Created by Skylar So on 5/30/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#ifndef lander_h
#define lander_h

#include "point.h"
#include "velocity.h"

/********************************************
 * LANDER
 * Vehical for landing on the cheese
 ********************************************/
class Lander
{
public:
    
    //Constructors
    Lander() : lP(150.0, 150.0), alive(true), landed(false) {}
    
    //Getters
    Point getPoint() const { return lP; }
    Velocity getVelocity() const { return velocity; }
    
    
    bool isAlive() { return alive; }
    bool isLanded() { return landed; }
    int getFuel() { return fuel; }
    bool canThrust() { return thrust = true; }
    
    //Setters
    void setLanded(bool landed) { this->landed = landed;  }
    void setAlive(bool alive) { this->alive = alive; }
    void setFuel(int fuel) { this->fuel = fuel; }
    void setPoint(Point point) { this -> lP = point; }
    
    //Functions
    float applyGravity(float gravity);
    void applyThrustLeft();
    void applyThrustRight();
    void applyThrustBottom();
    void advance();
    void draw();
    void reset();
    
    
private:
    Point lP;
    Velocity velocity;
    bool alive;
    bool landed;
    int fuel;
    bool thrust;
    bool bottom;
    bool right;
    bool left;
    
};

#endif /* lander_h */
