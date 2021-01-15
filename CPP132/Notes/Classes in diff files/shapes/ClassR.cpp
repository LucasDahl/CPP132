//
//  ClassR.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/14/21.
//

#include "ClassR.hpp"

// Get the width
double Rectangle::getWidth() {
    return width;
}

// Get the length
double Rectangle::getLength() {
    return length;
}

// Get the area
double Rectangle::getArea() {
    return width * length;
}

// Set width
void Rectangle::setWidth(double w) {
    
    if(w > 0) {
        width = w;
    } else {
        width = 1;
    }
    
}

// Set length
void Rectangle::setLength(double l) {
    
    if(l > 0) {
        length = l;
    } else {
        length = 1;
    }
    
}
