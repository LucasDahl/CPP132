//
//  Weapon.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/9/21.
//

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include "ExtraMethods.hpp"

using namespace std;

// MARK: Constructors - Weapon

Weapon::Weapon() {
    weaponHitChance = 50;
}

Weapon::~Weapon() {}

// MARK: Methods  - Weapon

// The amount of damage from the weapon
int Weapon::doDamage() {
    return 10;
}

// Checks if the weapon hits
bool Weapon::hitChance() {
    return makeRandomNumber() > weaponHitChance;
}



// End of Weapon class
//==================================================

// MARK: Constructors - Sword

Sword::Sword() {
    weaponHitChance = 25;
}

Sword::~Sword() {
//    cout << "Sword deleted" << endl;
}

// MARK: Methods  - Sword

// Overridden
int Sword::doDamage() {
    return makeRandomNumber(1, 6) + makeRandomNumber(1, 6) + 2;
}

void Sword::printResults() {
    
    cout << "This Sword ";
    
    if(hitChance()) {
        cout << "HIT for " << doDamage() << " points of damage" << endl;
    } else {
        cout << "MISSED" << endl;
    }
}

//==================================================

// MARK: Constructors - Mace

Mace::Mace() {
    weaponHitChance = 40;
}

Mace::~Mace() {}

// MARK: Methods  - Mace

// Overridden
int Mace::doDamage() {
    return makeRandomNumber(1, 10) + makeRandomNumber(1, 10) + 5;
}

void Mace::printResults() {
    
    cout << "This Mace ";
    
    if(hitChance()) {
        cout << "HIT for " << doDamage() << " points of damage" << endl;
    } else {
        cout << "MISSED" << endl;
    }
}

//==================================================

// MARK: Constructors - Dagger

Dagger::Dagger() {
    weaponHitChance = 45;
}

Dagger::~Dagger() {}

// MARK: Methods  - Dagger


void Dagger::printResults() {
    
    cout << "This Dagger ";
    
    if(hitChance()) {
        cout << "HIT for " << doDamage() << " points of damage" << endl;
    } else {
        cout << "MISSED" << endl;
    }
}

//==================================================


// MARK: Constructors - Club

Club::Club() {
    weaponHitChance = 80;
}

Club::~Club() {}

// MARK: Methods  - Club

void Club::printResults() {

    cout << "This Club ";

    if(hitChance()) {
        cout << "HIT for " << doDamage() << " points of damage" << endl;
    } else {
        cout << "MISSED" << endl;
    }
}

int Club::doDamage() {
    return 15;
}

//==================================================
