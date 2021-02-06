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
        Train(const Train &other); // Copy constructor (const is optional)
        int addCar(TrainCar);
    
        void operator = (const Train&); // pass objects by reference(the error would be on the deconstructor if there is no &(passed by referene(pointers)))
    
        friend ostream& operator << (ostream&, const Train&); // pass objects by reference(the error would be on the deconstructor if there is no &)
    
};

// Prototype

ostream& operator << (ostream&, const Train&);

#endif /* Train_hpp */
