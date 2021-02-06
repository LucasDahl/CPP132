//
//  Vehicle.cpp
//  CPP132
// This contains the Vehicle methods
//  Created by Lucas Dahl on 2/5/21.
//

#include "Vehicle.hpp"
#include <iostream>
#include <string>

using namespace std;

// MARK: Constructor

// Default constructor
Vehicle::Vehicle() {
    type = "unknown";
    topSpeed = 1;
}

// A constructor that sets the type and speed.
Vehicle::Vehicle(string type, int speed) {
    
    // Check the speed
    if(speed > 0) {
        topSpeed = speed;
    } else {
        speed = 1;
    }
    
    this->type = type;
    
}

// MARK: Methods

// Returns the top speed
int Vehicle::getSpeed() {
    return topSpeed;
}

// Sets the speed
void Vehicle::setSpeed(int speed) {
    
    if(speed > 0) {
        topSpeed = speed;
    } else {
        speed = 1;
    }
    
}

// This method will return the speed category
string Vehicle::getSpeedCategory() {
    
    // Properties
    int speed = this->getSpeed();
    
    if(speed >= 0 && speed <= 20) {
        return "Category 1:Slow";
    } else if(speed >= 21 && speed <= 50) {
        return "Category 2:Avergae";
    } else if(speed >= 50 && speed <= 100) {
        return "Category 3:Fast";
    } else if(speed >= 100 && speed <= 200) {
        return "Category 4:Accelerated";
    } else if (speed > 200) {
        return "Category 5:Unsafe";
    } else {
        return "Speed not found";
    }
    
    
}
