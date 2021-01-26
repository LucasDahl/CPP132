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
    
        // Could replace Friend functions
        int getGold()   const { return gold;   }
        int getSilver() const { return silver; }
        int getCopper() const { return copper; }
    
        // Constructor
        Purse();
        Purse(int, int = 0, int = 0); // Constructor with default values
    
        // No need for a copy constructor, since data has no pointers
        // But adding one for practice
        Purse(const Purse&); // Copy constructor
    
        // Deconstructor - doesnt do anything
        ~Purse();
    
        // Methods
        void printData();
    
        // Overloaded operators
        // return type, name, parameters(what is on the right side).
        // const inside the () makes sure the RHS wont change and the const outside () makes sure
        // the LHS wont change.
        Purse operator+(const Purse&) const; // What is in the () is whats on the right side.
        Purse operator+(int c) const; // Sam as above, but different right hand side. // Wont allow for int + Purse, only Purse + int - see below
    
        //Purse operator -(const Purse&) const;
        
        // Friend methods(not a prototype
        friend Purse operator+(int,  const Purse&); // Allows for in t+ purse
};

Purse operator+(int,  const Purse&); // Allows for in t+ purse

#endif /* Purse_hpp */
