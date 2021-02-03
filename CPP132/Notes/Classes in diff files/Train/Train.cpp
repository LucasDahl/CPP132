//
//  Train.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/3/21.
//

#include "Train.hpp"
#include <string>

using namespace std;

// MARK: Constructor

Train::Train() {
    startLocation = "Unknown";
    endLocation = "Unknown";
    numCars = 0;
}

Train::Train(string to, string from) {
    startLocation = to;
    endLocation = from;
    numCars = 0;
}

// MARK: Deconstructor

Train::~Train() {
    delete[] cars;
}

// MARK: Methods
int Train::addCar(TrainCar newCar) {
    
    if(numCars == 0) {
        cars = new TrainCar[1];
        cars[0] = newCar;
    } else {
        
        // Make a new array one bigger
        TrainCar* temp = new TrainCar[numCars + 1];
        // Copy to the temp array
        for(int i = 0; i < numCars; i++) {
            temp[i] = cars[i];
            
        }
        temp[numCars] = newCar; // add the new car at the end
        delete[] cars; // delete the old array
        cars = temp; // Set teh new array to the temp array
    }
    
    // increase numCars
    numCars++;
    
    return numCars;
}

// MARK: Operators
void Train::operator = (Train &other) {
    
    this->startLocation = other.startLocation;
    this->endLocation = other.endLocation;
    this->numCars = 0;
    if(other.numCars == 0) return;
    
    // Atleast one car
    for(int i = 0; i < other.numCars; i++) {
        this->addCar(other.cars[i]);
    }
}

// MARK: Non class functions

ostream& operator << (ostream &o, Train &x) {
    
//    if(x.numCars == 0) {
//        o << "No cars";
//    } else {
//        o << "Train [" << x.startLocation << " <--> " << x.endLocation << "]";
//        o << " cars: ";
//        for(int i = 0; i < x.numCars; i++) {
//            o << x.cars[i].name << ":" << x.cars[i].weight << " ";
//        }
//    }
//
    o << "Train [" << x.startLocation << " <--> " << x.endLocation << "]";
    o << " cars: ";
    for(int i = 0; i < x.numCars; i++) {
        o << x.cars[i].name << ":" << x.cars[i].weight << " ";
    }
 
    return o;
}
