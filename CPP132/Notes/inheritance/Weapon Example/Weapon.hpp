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

// Prototype - (not part of random) - with default values
int makeRandomNumber(int = 1, int = 100);

// MARK: Super Class

// To make polymorphism work in c++
// need 2 things!
//
// 1. virtual methods/functions
// 2. pointers

class Weapon {
    
    private:
    
    
    protected:
        // Fields
        int weaponHitChance;
    
    public:

        // Constructors
        Weapon();
        ~Weapon();
    
        // Methods
        virtual int doDamage(); // Allows to be over ridden and a pointer is still needed
        bool hitChance();
        virtual void printResults();
    
    
    
};

// MARK: Sub Classes

class Sword : public Weapon {
  
    public:
        // Constructors
        Sword();
        ~Sword();
    
        int doDamage();
        void printResults();
    
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

#endif /* Weapon_hpp */
