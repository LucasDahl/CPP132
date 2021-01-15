//
//  ClassR.hpp
//  CPP132
//
//  Created by Lucas Dahl on 1/14/21.
//

// These are needed when we make a custom class. IT IS A MUST
// can use #pragma once in most version of C++
#ifndef ClassR_hpp // Include guard line 1 these makes sure it wont make multple instances and creat a loop
#define ClassR_hpp // Include guard line 2

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std; // This can be in th emain file



// The class for the rectangle.
class Rectangle {
    
    // can do the same thing with a struct(they are almost the exact same thing).
    // Only difference is structs are public by default, whereas classes are private by default.
    
    // Structs are for data
    // Classes are for actions.
    
    
    // The default label will be private if one is not given.
    
    // Private fields/methods
    private:
        double width; // Field
        double length; // Field
    
    // Public fields/methods
    public:
        string name; // Field
    
        void setWidth(double); // Methods (also counted as prototypes
        void setLength(double); // Methods (also counted as prototypes
        double getWidth(); // Methods (also counted as prototypes
        double getLength(); // Methods (also counted as prototypes
        double getArea(); // Methods (also counted as prototypes
    
};

// Can the header have multiple classes, but you have a different file for each class's methods?

#endif /* ClassR_hpp */ // Include guard line 3 - must be the last line
