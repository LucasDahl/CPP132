//
//  Purse.hpp
//  CPP132
//
//  Created by Lucas Dahl on 1/25/21.
//

#ifndef Purse_hpp
#define Purse_hpp

#include <iostream>
#include <string>

using namespace std;

class Purse {
    
    private:
    
        // Fields
        int gold;
        int silver;
        int copper;
    
    public:
    
        // Constructor
        Purse();
        Purse(int, int = 0, int = 0); // Constructor with default values
        // No need for a copy constructor, since data has no pointers
        // But adding one for practice
        Purse(const Purse&);
    
        // Deconstructor - doesnt do anything
        ~Purse();
    
        // Methods
        void printData();
    
};

#endif /* Purse_hpp */
