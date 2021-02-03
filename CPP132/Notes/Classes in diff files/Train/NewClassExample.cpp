//
//  NewClassExample.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/3/21.
//

#include <iostream>
#include <string>
#include "Train.hpp"

using namespace std;

int main() {
    
    Train x;
    Train y("Denver", "Seattle");
    
    y.addCar({"Coal", 100});
    y.addCar({"Coal", 75});
    y.addCar({"Banana", 50});
    
    //Train z = y // This needs a copy constructor
    
    x = y; // Sharred pointer would create an error
    
    x.addCar({"Trash", 50});
    
    cout << y << endl;
    cout << x << endl;
    
}
