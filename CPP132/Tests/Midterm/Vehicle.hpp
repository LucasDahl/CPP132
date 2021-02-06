//
//  Vehicle.hpp
//  CPP132
// This is the header file for the Vehicle class
//  Created by Lucas Dahl on 2/5/21.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    
    private:
        string type;
        int topSpeed;
    
    public:
        // Constructors
        Vehicle();
        Vehicle(string, int);
    
        // Methods
        int getSpeed();
        void setSpeed(int);
        string getSpeedCategory();
    
};

#endif /* Vehicle_hpp */
