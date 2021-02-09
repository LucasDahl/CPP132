//
//  PolarCoordinates.hpp
//  CPP132
//This is the PolarCoordinates header file.
//  Created by Lucas Dahl on 2/5/21.
//

#ifndef PolarCoordinates_hpp
#define PolarCoordinates_hpp

#include <iostream>
#include <string>

using namespace std;

class PolarCoordinates {
  
    private:
    
        // Fields
        double l;
        double theta;
    
        // Methods
        void reduce();
    
    public:
        // Constructors
        PolarCoordinates();
        PolarCoordinates(double, double);
    
        
    
        PolarCoordinates operator*(const PolarCoordinates&);
        bool operator==(const PolarCoordinates&);
    
    
    
};

#endif /* PolarCoordinates_hpp */
