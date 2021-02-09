//
//  Weapon.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/9/21.
//

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <random> // needed for random
#include <chrono> // needed for random

using namespace std;

// class Methods
// Global random number
unsigned WC_seed1 = chrono::system_clock::now().time_since_epoch().count();
default_random_engine WC_rd(WC_seed1);
mt19937 WC_mt(WC_rd());

int makeRandomNumber(int MIN, int MAX) {
    uniform_int_distribution<int> dist(MIN, MAX);
    return dist(WC_mt);
}

// End of random stuff
//==================================================

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

void Weapon::printResults() {
    
    cout << "This weapon ";
    
    if(hitChance()) {
        cout << "HIT for " << doDamage() << " points of damage" << endl;
    } else {
        cout << "MISSED" << endl;
    }
}

// End of Weapon class
//==================================================

// MARK: Constructors - Sword

Sword::Sword() {
    weaponHitChance = 25;
}

Sword::~Sword() {
    
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
