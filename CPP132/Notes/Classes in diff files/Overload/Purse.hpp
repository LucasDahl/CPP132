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
    
        // Private method - (internal method or helper method)
        int getCopperValue() const;
        
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
        Purse operator+(const Purse &) const; // What is in the () is whats on the right side.
        Purse operator+(int c) const; // Sam as above, but different right hand side. // Wont allow for int + Purse, only Purse + int - see below
    
        //Purse operator -(const Purse&) const;
        
        // Friend methods(not a prototype
        friend Purse operator+(int,  const Purse &); // Allows for in t+ purse
    
        bool operator == (const Purse &) const; // We re going to compare based upon VALUE, not coins
        bool operator != (const Purse &) const;
        bool operator < (const Purse &) const;
        bool operator > (const Purse &) const;
        bool operator <= (const Purse &) const;
        bool operator >= (const Purse &) const;
    
        bool operator == (int) const;
    
        int operator[](int);
    
        // THIS IS NEEDED FOR ASSIGNMENT #3
        // There are two operators for ++
        // One with a parameter and one without
        Purse operator++(); // Pre- fix ++x , add then return
        Purse operator++(int); // Post- fix x++ return then add
    
        // BIG - is needed for assignment 3
        friend std::ostream& operator <<(std::ostream &lhs, const Purse &rhs);
        friend std::istream& operator >>(std::istream &lhs, Purse &rhs);
        
    
};

// This is needed for assignemnt #3
// Has to be done outside since the left hand side is not a Purse(object)
// & is for pointers and is to pass by reference.
// command line for left hand operator
// Will need to be a friend or add getters, so it has access to the class data and methods
// it is one of the most common friend functions
// lhs and rhs arent needed here, but it helps reability
std::ostream& operator <<(ostream &lhs, const Purse &rhs);
std::istream& operator >>(std::istream &lhs, Purse &rhs);// NOT CONST

Purse operator+(int,  const Purse&); // Allows for int + purse

#endif /* Purse_hpp */
