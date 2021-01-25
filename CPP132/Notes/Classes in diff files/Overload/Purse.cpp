//
//  Purse.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/25/21.
//

#include "Purse.hpp"
#include <iostream>
#include <string>

using namespace std;

//==================
// MARK: Constructor
//==================

// Default constructor
Purse::Purse() {
    gold = 0;
    silver = 0;
    copper = 0;
}

Purse::Purse(int startGold, int startSilver, int startCopper) {
    
    // Make sure each value passed in is greater or equal to zero.
    
    if(startGold >= 0) {
        gold = startGold;
    } else {
        gold = 0;
    }
    
    if(startSilver >= 0) {
        silver = startSilver;
    } else {
        silver = 0;
    }
    
    if(startCopper >= 0) {
        copper = startCopper;
    } else {
        copper = 0;
    }
    
}

// Copy constructor, it is not needed.
Purse::Purse(const Purse &other) {
    
    this->gold = other.gold;
    this->silver = other.silver;
    this->copper = other.copper;
    
}

//======================
// MARK: Private Methods
//======================

//=====================
// MARK: Public Methods
//=====================
void Purse::printData() { // Eventually will be replaced with <<
    
    cout << gold << " : gold " << silver << " : silver " << copper << " : copper. For a total of [";
    
    int total;
    total = copper + 50 * silver + 10 * 50 * gold;
    
    cout << total << " copper]" << endl;
    
}

//====================
// MARK: Deconstructor
//====================
Purse::~Purse() { }
