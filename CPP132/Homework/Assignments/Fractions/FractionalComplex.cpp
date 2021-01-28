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

// This is default constructor
FractionalComplex::FractionalComplex() {
    
    a = 0;
    b = 1;
    c = 0;
    d = 1;
    
    
}

// This constructor sets the num
FractionalComplex::FractionalComplex(int x, int y) {
    
    a = x;
    b = 1;
    c = y;
    d = 1;

}

// This constructor will set all values of the fraction.
FractionalComplex::FractionalComplex(int a, int b, int c, int d) {
    
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    
    // Reduce if possible
    reduce();
    
}

//======================
// MARK: Private Methods
//======================

// This method will reduce a fraction if possible.
void FractionalComplex::reduce() {
 
    // Properties
    int gcdOne = findGCD(a, b);
    int gcdTwo = findGCD(c, d);

    // Reduce the fractions.
    a = a / gcdOne;
    b = b / gcdOne;
    c = c / gcdTwo;
    d = d / gcdTwo;

}

// This method will find the greates common denominator.
int FractionalComplex::findGCD(int numerator, int denominator) {
    
    // Properties
    int gcd;
    int remainder;

    // Find the GCD
    while (numerator != 0) {
        
        remainder = denominator % numerator;
        denominator = numerator;
        numerator = remainder;
        
    }

    // Set the GCD
    gcd = denominator;

    // Retunr the GCD
    return gcd;
}

//=====================
// MARK: Public Methods
//=====================

// This method simply prints the Fractional
// complex.
void FractionalComplex::printme() {
    
    cout << "[(" << a << "/" << b << ")]";
    cout << " + ";
    cout << "[(" << c << "/" << d << ")]" << "i" << endl;
}

double FractionalComplex::length() {
    return sqrt(pow((a/b), 2) + pow((c/d), 2));
}

//===============
// MARK: Overload
//===============

// a  c     a  c
// -  - i + -  - i
// b  d     b  d

// 1  -1    1  7
// -  - i + -   - i
// 6  4     4  11

// a  a     c  c
// -  - i + -  - i
// b  b     d  d
FractionalComplex FractionalComplex::operator +(const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction;
    
    // add the two fractions.
    if(b != rhs.b) {
        tempFraction.a = (a * rhs.b) + (b * rhs.a);
        tempFraction.b = b * rhs.b;
    } else {
        tempFraction.a = a + rhs.a;
        tempFraction.b = b;
    }
    
    if(d != rhs.d) {
        tempFraction.c = (c * rhs.b) + (b * rhs.c);
        tempFraction.d = d * rhs.d;
    } else {
        tempFraction.c = c + rhs.c;
        tempFraction.d = d;
    }
    

    // Reduce the fraction(if possible);
    tempFraction.reduce();
  
    // Returnt he sum of the two fractions.
    return tempFraction;
}

FractionalComplex FractionalComplex::operator - (const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction;
    
    tempFraction.a = (a * rhs.b) - (b * rhs.a);
    tempFraction.b = b * rhs.b;
    tempFraction.c = (c * rhs.d) - (d * rhs.c);
    tempFraction.d = d * rhs.d;
    
//        cout << "A: " << a << " C: " << c << endl;
//        cout << "B: " << b << " D: " << d << endl;
//
//        cout << endl;
//
//        cout << "AR: " << rhs.a << " CR: " << rhs.c << endl;
//        cout << "BR: " << rhs.b << " DR: " << rhs.d << endl;
//
//        cout << endl;
//
//        cout << "TA: " << tempFraction.a << " TC: " << tempFraction.c << endl;
//        cout << "TB: " << tempFraction.b << " TD: " << tempFraction.d << endl;
    
    // Reduce if possible
    tempFraction.reduce();
    
    return tempFraction;
}

FractionalComplex FractionalComplex::operator *(FractionalComplex &rhs) {
    FractionalComplex temp;
    return temp;
}

ostream& operator <<(ostream &lhs, const FractionalComplex &rhs) {
    return lhs;
}

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

