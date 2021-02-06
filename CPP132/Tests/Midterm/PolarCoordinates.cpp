//
//  PolarCoordinates.cpp
//  CPP132
// This file contains the PolarCoordinates methods.
//  Created by Lucas Dahl on 2/5/21.
//

#include "PolarCoordinates.hpp"


// Defualt constructor
PolarCoordinates::PolarCoordinates() {
    l = 0;
    theta = 0;
}

// Sets the length and angle
PolarCoordinates::PolarCoordinates(double length, double angle) {
 
    // Check the angle
    if(angle > 360) {
        
        theta = angle;
        reduce();
        
    } else {
        theta = angle;
    }
    
    l = length;
    
}

// MARK: Methods

// Multiples two PolarCoordinates
PolarCoordinates PolarCoordinates::operator*(const PolarCoordinates &rhs) {
    
    PolarCoordinates tempPolar;
    
    // Set the temp polar
    tempPolar.l = l * rhs.l;
    tempPolar.theta = theta + rhs.theta;
    
    tempPolar.reduce();
    
    return tempPolar;
    
}

// Copmares two PolarCoordinates
bool PolarCoordinates::operator==(const PolarCoordinates &rhs) {
    
    if(l == rhs.l && theta == rhs.theta) {
        return true;
    }
    
    return false;
    
}

// Reduces a PolarCoordinates angle.
void PolarCoordinates::reduce() {
    
    while(theta > 360) {
        theta = theta - 360;
    }
    
}
