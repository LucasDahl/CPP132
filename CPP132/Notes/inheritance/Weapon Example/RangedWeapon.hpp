//
//  RangedWeapon.hpp
//  CPP132
//
//  Created by Lucas Dahl on 2/10/21.
//

#ifndef RangedWeapon_hpp
#define RangedWeapon_hpp

#include <iostream>
#include <string>
#include <vector>
#include "ExtraMethods.hpp"
#include "Weapon.hpp"

using namespace std;

class RangedWeapon: public Weapon {
  
    private:
    public:
        virtual ~RangedWeapon();
        RangedWeapon();
        RangedWeapon(int);
        virtual bool hitChance();
    
    protected:
        int increment;
        int currentInc;
    
};

class Bow: public RangedWeapon {
    
    public:
        Bow() {};
        Bow(int);
        virtual ~Bow();
        int doDamage();
        virtual void printResults();
    
};

class CrossBow: public Bow {
    
    public:
        CrossBow(int);
        virtual ~CrossBow();
        int doDamage();
    
};

#endif /* RangedWeapon_hpp */
