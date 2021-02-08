//
//  Month.cpp
//  CPP132
// This file contains the MOnth class methods
//  Created by Lucas Dahl on 2/5/21.
//

#include "Month.hpp"
#include <iostream>
#include <string>
using namespace std;

// MARK: Constructor

Month::Month() {
    month = 1;
    year = 1970;
}

Month::Month(int year) {
    
    month = 1;
    this->year = year;
    
}

Month::Month(int year, int month){
    
    // Check the year
    if(year < 0) {
        this->year = 2020;
    } else {
        this->year = year;
    }
    
    // Check the month
    if(month < 0) {
        this->month = 0;
    } else if(month > 12) {
        this->month = 11;
    } else {
        this->month = month;
    }
    
}

// This is where you set the values to the static array.
const string Month:: months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

// MARK: Methods

string Month::toString() const {
    
    string yearFormatted;
    
    
    yearFormatted = months[month - 1] + ", " + to_string(year);
    
    return yearFormatted;
    
}

// Prefix increment
Month Month::operator++() {
    month++;
    return *this;
}

Month Month::operator++(int x) {
    
    Month tempMonth = *this;

    month = month + 1;

    return tempMonth;
    
}

ostream& operator <<(ostream &lhs, const Month &rhs) {
    
    lhs << rhs.toString();
    
    return lhs;
    
}
