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
#include <cmath>

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

// This constructor sets the numerators
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
    int gcdOne = findGCD(a, b), lcdOne = findLCD(a, b);
    int gcdTwo = findGCD(c, d), lcdTwo = findLCD(c, d);

    // Reduce the fractions.
    if(lcdOne % a == 0 && lcdOne % b == 0) { // ERROR
        a = a / gcdOne;
        b = b / gcdOne;
    }
    
    if(lcdTwo % c == 0 && lcdTwo % d == 0) {
        c = c / gcdTwo;
        d = d / gcdTwo;
    }
    
    // Check for if the fraction is negative, or if the denominator is not zero
    if(a < 0 && b < 0) {
        a = abs(a);
        b = abs(b);
    } else if(b < 0) {
        a = a * -1;
        b = abs(b);
    } else if(b == 0) {
        a = 0;
        b = 1;
    }
    
    if(c < 0 && d < 0) {
        c = abs(c);
        d = abs(d);
    } else if(d < 0) {
        c = c * -1;
        d = abs(d);
    } else if(d == 0) {
        c = 0;
        d = 1;
    }
    
}

// A method to find the LCD
int FractionalComplex::findLCD(int a, int b) {
    return (a * b) / findGCD(a, b);
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
// complex, without using and overloaded operator.
void FractionalComplex::printme() {
    
    cout << "[(" << a << "/" << b << ")i]";
    cout << " + ";
    cout << "[(" << c << "/" << d << ")i]" << endl;
   
}

// This method will find the length
double FractionalComplex::length() {
    return sqrt(pow(((a * 1.0)/(b * 1.0)), 2) + pow(((c * 1.0)/(d * 1.0)), 2));
}

//===================
// MARK: Manipulation
//===================

// This overloaded operator will add two FractionalComplexs
FractionalComplex FractionalComplex::operator + (const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction;
    
    // add the two fractions.
    if(b != rhs.b) {
        tempFraction.a = (a * rhs.b) + (b * rhs.a);
        tempFraction.b = b * rhs.b;
    } else if(b == rhs.b) {
        tempFraction.a = a + rhs.a;
        tempFraction.b = b;
    }
    
    if(d != rhs.d) {
        tempFraction.c = (c * rhs.d) + (d * rhs.c);
        tempFraction.d = d * rhs.d;
    } else if(d == rhs.d) {
        tempFraction.c = c + rhs.c;
        tempFraction.d = d;
    }
    
    // Reduce the fraction(if possible);
    tempFraction.reduce();
  
    // Returnt he sum of the two fractions.
    return tempFraction;
}

// This overloaded operator will subtract two FractionalComplexs
FractionalComplex FractionalComplex::operator - (const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction;
    
    tempFraction.a = (a * rhs.b) - (b * rhs.a);
    tempFraction.b = b * rhs.b;
    tempFraction.c = (c * rhs.d) - (d * rhs.c);
    tempFraction.d = d * rhs.d;
    
    // Make sure the denominators are not zero.
    if(tempFraction.b < 0) {
        tempFraction.a = 0;
        tempFraction.b = 1;
    }
    
    if(tempFraction.d < 0) {
        tempFraction.c = 0;
        tempFraction.d = 1;
    }
    
    // Reduce if possible
    tempFraction.reduce();
    
    return tempFraction;
}

// This overloaded operator will multiple a FractionalComplexs with an int
FractionalComplex operator * (const FractionalComplex &lhs,  int x) {
    
    FractionalComplex tempFraction;
    
    // Set teh values
    tempFraction.a = lhs.a * x;
    tempFraction.b = lhs.b;
    tempFraction.c = lhs.c * x;
    tempFraction.d = lhs.d;
    
    // Reduce the fraction if possible.
    tempFraction.reduce();
    
    return tempFraction;
}

// This overloaded operator will multiple two FractionalComplexs
FractionalComplex FractionalComplex::operator *(const FractionalComplex &rhs) {

    FractionalComplex tempFraction, tempFractionOne, tempFractionTwo;

    // Set teh values
    tempFractionOne.a = (a * rhs.a);
    tempFractionOne.b = (b * rhs.b);
    tempFractionOne.c = (a * rhs.c);
    tempFractionOne.d = (b * rhs.d);
    
    tempFractionTwo.a = -1 * (c * rhs.c);
    tempFractionTwo.b = (d * rhs.d);
    tempFractionTwo.c = c * rhs.a;
    tempFractionTwo.d = (d * rhs.b);
    
    // Add them together(+ operator will reduce)
    tempFraction = tempFractionOne + tempFractionTwo;
    
    return tempFraction;
}


//=============
// MARK: Output
//=============

// This overloaded operator will output a FractionalComplexs
ostream& operator <<(ostream &lhs, const FractionalComplex &rhs) {

    lhs << "[(" << rhs.a << "/" << rhs.b << ")i]";
    lhs << " + ";
    lhs << "[(" << rhs.c << "/" << rhs.d << ")i]";
    
    return lhs;
}

//================
// MARK: Increment
//================

// Prefix increment
FractionalComplex FractionalComplex::operator++() {
    
    a = a + b;
    c = c + d;

    return *this;
    
}

// Postfix increment
FractionalComplex FractionalComplex::operator++(int) {

    FractionalComplex tempFraction = *this;
    
    a = a + b;
    c = c + d;
    
    return tempFraction;
}

// Deconstructor
FractionalComplex::~FractionalComplex() {}

//==============
// MARK: Compare
//==============

// This operator is used to determine if a FractionalComplex is less than than another.
bool FractionalComplex::operator < (const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction = rhs;
    
    // Make sure both fractions are reduced
    reduce();
    tempFraction.reduce();
    
    if(length() < tempFraction.length()) {
        return true;
    }

    return false;
}

// This operator is used to determine if a FractionalComplex is greater than another.
bool FractionalComplex::operator > (const FractionalComplex &rhs) {
    
    // Properties
    FractionalComplex tempFraction = rhs;
    
    // Make sure both fractions are reduced
    reduce();
    tempFraction.reduce();

    if(length() > tempFraction.length()) {
        return true;
    }
    
    return false;
}

// This operator is used to see if two FractionalComplex are equal to each other.
bool FractionalComplex::operator == (const FractionalComplex &rhs) {
    
    FractionalComplex tempFraction = rhs;
    
    // Make sure both fractions are reduced
    reduce();
    tempFraction.reduce();
    
    if(a == tempFraction.a && b == tempFraction.b && c == tempFraction.c && d == tempFraction.d) {
        return true;
    }
    
    return false;
}
