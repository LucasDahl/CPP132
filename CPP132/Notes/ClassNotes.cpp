//
//  ClassNotes.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/13/21.
//

#include <iostream>
#include <string>

using namespace std;


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


// THe mian function.
int main() {
    
    // Properties
    Rectangle r1;
    Rectangle r2;
    Rectangle *r3;
    
    r3 = new Rectangle;
    
    r1.name = "Bob";
    r1.setWidth(5);
    r1.setLength(5);
    cout << r1.getArea() << endl;
    
    r2.name = "Sue";
    r2.setLength(20);
    r2.setWidth(50);
    cout << r2.getArea() << endl;
    
    r3->name = "Jose";
    r3->setLength(4);
    r3->setWidth(400);
    
    cout << r3->getArea() << endl;
    
    
}

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
        width = l;
    } else {
        width = 1;
    }
    
}
