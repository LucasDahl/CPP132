//
//  Weapon.hpp
//  CPP132
//
//  Created by Lucas Dahl on 2/9/21.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;


// MARK: Super Class

// To make polymorphism work in c++
// need 2 things!
//
// 1. virtual methods/functions
// 2. pointers
// Common practice to put virtual when using polymorphism


// Abstract class, is any class with one or more method = 0.
class Weapon { // Modifiy this to make it "ABSTRACT"
    
    private:
    
    
    protected:
        // Fields
        int weaponHitChance;
    
    public:

        // Constructors
        Weapon();
        virtual ~Weapon(); // Destructors are always virtual so they can be overridden.
    
        // Methods
        virtual int doDamage() = 0; // Allows to be over ridden and a pointer is still needed
        virtual bool hitChance();
        virtual void printResults() = 0; // Abstract method MUST BE OVERRIDDEN( = 0) to actually work
    
    
    
};

// MARK: Sub Classes

class Sword : public Weapon {
  
    public:
        // Constructors
        Sword();
        virtual ~Sword();
    
        virtual int doDamage(); // virtual is not really needed but is used for clarity(same with printResults)
        virtual void printResults();
    
};

class Dagger : public Sword {
  
    public:
        // Constructors
        Dagger();
        ~Dagger();
    
        void printResults();
    
};

class Mace : public Weapon {
  
    public:
        // Constructors
        Mace();
        ~Mace();
    
        int doDamage();
        void printResults();
    
};

class Club: public Weapon {
  
    public:
        Club();
        int doDamage();
        virtual ~Club();
        virtual void printResults();
    
    
};

#endif /* Weapon_hpp */
