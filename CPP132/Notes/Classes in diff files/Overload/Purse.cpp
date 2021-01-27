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

int Purse::getCopperValue() const {
    return this->copper + 50 * silver + 10 * 50 * gold;
}

//=====================
// MARK: Public Methods
//=====================
void Purse::printData() { // Eventually will be replaced with <<
    
    cout << gold << " : gold " << silver << " : silver " << copper << " : copper. For a total of [";
    
    int total;
    total = copper + 50 * silver + 10 * 50 * gold;
    
    cout << total << " copper]" << endl;
    
}



//=========================
// MARK: Overload operators
//=========================

// Adds two Purse objects together 
Purse Purse::operator + (const Purse &rhs) const {
    
    // Create a new Purse(object)
    Purse temp;
    
    // Get the values from teh fields of the passed in purse(object)
    // plus the object itself(left hand side of operator)
    // This is not needed in
    temp.gold = this->gold + rhs.gold;
    temp.silver = this->silver + rhs.silver;
    temp.copper = this->copper + rhs.copper;
    
    // Retunr the combined Purse(object)
    return temp;
}

// This will only add the copper to the purse
// Not everything else.
Purse Purse::operator + (int c) const {
    
    // Create a new Purse(object)
    Purse temp;
    
    // Get the values from teh fields of the passed in purse(object)
    // plus the object itself(left hand side of operator)
    // This is not needed in
    temp.gold = this->gold;
    temp.silver = this->silver;
    temp.copper = this->copper + c;
    
    // Retunr the combined Purse(object)
    return temp;
}

bool Purse::operator == (const Purse &rhs) const {
    
    // Take the value of (this (self object)) and the rhs Purse
//    int myValue = getCopperValue();
//    int otherValue = rhs.getCopperValue();
    
    
    return this->getCopperValue() == rhs.getCopperValue();
}

bool Purse::operator != (const Purse &rhs) const {
    return this->getCopperValue() != rhs.getCopperValue();
}

bool Purse::operator <(const Purse &rhs) const {
    return this->getCopperValue() < rhs.getCopperValue();
}

bool Purse::operator >(const Purse &rhs) const {
    return this->getCopperValue() > rhs.getCopperValue();
}

bool Purse::operator <= (const Purse &rhs) const {
    return this->getCopperValue() <= rhs.getCopperValue();
}

bool Purse::operator >=(const Purse &rhs) const {
    return this->getCopperValue() >= rhs.getCopperValue();
}

bool Purse::operator==(int c) const {
    return(this->getCopperValue() == c);
}


std::ostream& operator <<(std::ostream &lhs, const Purse &rhs) {
    
    // in this case cout is replaced with lhs
    
    lhs << rhs.gold << " : gold " << rhs.silver << " : silver " << rhs.copper << " : copper. For a total of [";
    lhs << rhs.getCopperValue() << " copper]";
    
    // now return the lhs(the stream)
    return lhs;
}

std::istream& operator <<(std::istream &lhs, Purse &rhs) {
    //TODO: write this
    
    return lhs;
}

//==========================
// MARK: NON member function
//==========================

// Does not need Purse:: since its not in the class(will need to be marked friend)
Purse operator+(int lhs,  const Purse &rhs) {
    
    Purse temp;
    temp.gold = rhs.gold;
    temp.silver = rhs.silver;
    temp.copper = lhs + rhs.copper;
    
    return temp;
    
}



//====================
// MARK: Deconstructor
//====================
Purse::~Purse() { }
