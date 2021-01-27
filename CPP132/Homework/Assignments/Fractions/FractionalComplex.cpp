//
//  FractionalComplex.cpp
//  CPP132
//
// This class makes a Fractional comeplex
// and overloads operators to use with
// the FractionalComplex class.
//
//  Created by Lucas Dahl on 1/23/21.
//

#include "FractionalComplex.hpp"
#include <iostream>
#include <string>
#include <cmath> // May not need, ask teacher

using namespace std;

//==================
// MARK: Constructor
//==================

FractionalComplex::FractionalComplex() {
    
    a = 0;
    b = 1;
    c = 0;
    d = 1;
    
}

FractionalComplex::FractionalComplex(int x, int y) {
    
    a = x;
    b = 1;
    c = y;
    d = 1;
    
}

FractionalComplex::FractionalComplex(int a, int b, int c, int d) {
    
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    
}

//======================
// MARK: Private Methods
//======================

// This method will reduce a fraction if possible.
void FractionalComplex::reduce() {
    
    // check if a and b can be reduced
    if(a % 2 == 0 && b % 2 == 0 ) {
        
        a = a / 2;
        b = b / 2;
        
    }
    
    // check if c and d can be reduced
    if(c % 2 == 0 && d % 2 == 0 ) {
        
        c = c / 2;
        b = b / 2;
        
    }
    
}

//=====================
// MARK: Public Methods
//=====================

// This method simply prints the Fractional
// complex.
void FractionalComplex::printme() {
    cout << "[(" << a << "/" << b << ")]";
    cout << " + ";
    cout << "[(" << c << "/" << d << ")]" << i;
}

double FractionalComplex::length() {
    return sqrt(pow((a/b), 2) + pow((c/d), 2));
}

//===============
// MARK: Overload
//===============

// a  c
// -  - i
// b  d
FractionalComplex FractionalComplex::operator +(const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction;
    
    // add the two fractions.
    tempFraction.a = this->a * rhs.d;
    tempFraction.b = this->b * rhs.d;
    tempFraction.c = this->c * rhs.b;
    tempFraction.d = this->d * rhs.b;
    
    // Reduce the fraction(if possible);
    tempFraction.reduce();
    
    // Returnt he sum of the two fractions.
    return tempFraction;
}
FractionalComplex FractionalComplex::operator -(const FractionalComplex &rhs) {
    FractionalComplex temp;
    return temp;
}
FractionalComplex FractionalComplex::operator *(FractionalComplex &rhs) {
    FractionalComplex temp;
    return temp;
}

//std::ostream &operator << (std::ostream &os, const FractionalComplex &rhs) {
//    return os;
//}

FractionalComplex FractionalComplex::operator++() {
    FractionalComplex temp;
    return temp;
}

FractionalComplex FractionalComplex::operator++(int x) {
    FractionalComplex temp;
    return temp;
}

int FractionalComplex::operator *(int x) {
    return 5;
}

bool FractionalComplex::operator <(FractionalComplex x) {
    return false;
}
bool FractionalComplex::operator >(FractionalComplex x) {
    return false;
}
bool FractionalComplex::operator ==(FractionalComplex x) {
    return false;
}

