//
//  velocity.h
//
//  Created by Skylar So on 5/31/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#ifndef velocity_h
#define velocity_h

class Velocity
{
private:
    
    float dx;
    float dy;
    
public:
    
    //CONSTRUCTORS
    Velocity() : dx(0), dy(0) {}
    Velocity(float dx, float dy) {this ->dx = dx; this -> dy = dy;}
    
    //SETTERS
    void setDx(float dx) { this->dx = dx; }
    void setDy(float dy) { this->dy = dy; }
    
    //GETTERS
    float getDx() const { return dx; }
    float getDy() const { return dy; }
    
};

#endif
