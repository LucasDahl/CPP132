//
//  Train.hpp
//  CPP132
//
//  Created by Lucas Dahl on 2/3/21.
//

#ifndef Train_hpp
#define Train_hpp

#include <iostream>
#include <string>

using namespace std;

struct TrainCar {
    
    public:
        string name;
        int weight;
    
};

class Train {
    
    private:
        string startLocation;
        string endLocation;
        TrainCar* cars; // Better off be a vect<TrainCar>
    int numCars;
    
    public:
        Train();
        ~Train(); // needed since there is a pointer.
        Train(string, string);
        int addCar(TrainCar);
    
        void operator = (Train&);
    
        friend ostream& operator << (ostream&, Train&);
    
};

// Prototype

ostream& operator << (ostream&, Train&);

#endif /* Train_hpp */
