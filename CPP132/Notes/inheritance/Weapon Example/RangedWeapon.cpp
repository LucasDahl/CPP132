//
//  RangedWeapon.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/10/21.
//

#include "RangedWeapon.hpp"
#include <iostream>

// MARK: Constructors - Ranged Weapons

RangedWeapon::RangedWeapon() {
    weaponHitChance = 10;
    increment = 1;
    currentInc = 1;
}

RangedWeapon::RangedWeapon(int accuracyPerShot) {
    weaponHitChance = 0;
    increment = accuracyPerShot;
    currentInc = 0;
}

RangedWeapon::~RangedWeapon() {
    
}

// MARK: Methods - Ranged Weapons

bool RangedWeapon::hitChance() {
    int pro = makeRandomNumber();
    int calculateChanceToHIt = weaponHitChance + currentInc;
    
    currentInc = currentInc + increment;
    
    return (pro <= calculateChanceToHIt);
}

//==============================================

// MARK: Constructors - Bow

Bow::Bow(int accuracyPerShot) {
    weaponHitChance = 0;
    increment = accuracyPerShot;
    currentInc = 0;
}

Bow::~Bow() {
    
}

// MARK: Methods - Bow

int Bow::doDamage() {
    return 15;
}

void Bow::printResults() {

    cout << "This Bow ";

    if(hitChance()) {
        std::cout << "HIT for " << doDamage() << " points of damage" << std::endl;
    } else {
        std::cout << "MISSED with a " << weaponHitChance + currentInc << "% chance to hit." << std::endl;
        
    }
}

//==============================================

// MARK: Constructors - Bow

CrossBow::CrossBow(int accuracyPerShot) {
    weaponHitChance = 0;
    increment = accuracyPerShot;
    currentInc = 0;
}

CrossBow::~CrossBow() {
    
}

// MARK: Methods - Bow

int CrossBow::doDamage() {
    return 15;
}

//==============================================
