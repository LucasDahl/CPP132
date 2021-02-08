//
//  FractionalComplex.hpp
//  CPP132
//
// This is the header file for the
// FractionalComplex class.
//
//  Created by Lucas Dahl on 1/23/21.
//

#ifndef FractionalComplex_hpp
#define FractionalComplex_hpp

#include <iostream>

using namespace std;

class FractionalComplex {
  
    private:
    
        // Fields
        int a;
        int b;
        int c;
        int d;
    
        // Methods
        void reduce();
        int findGCD(int, int);
        int findLCD(int a, int b);
        double length(); // Do i need const?

    public:
    
        // Constructors
        FractionalComplex();
        FractionalComplex(int, int);
        FractionalComplex(int, int, int, int);
    
        // Methods
        void printme();
    
        // Overload
    
        // Manipulation
        FractionalComplex operator + (const FractionalComplex&);
        FractionalComplex operator - (const FractionalComplex&);
        FractionalComplex operator * (const FractionalComplex&);
        friend FractionalComplex operator * (const FractionalComplex&,  int);
    
        // Increase
        FractionalComplex operator++();
        FractionalComplex operator++(int);
    
        // Compare
        bool operator < (const FractionalComplex&);
        bool operator > (const FractionalComplex&);
        bool operator == (const FractionalComplex&);
    
        // Output
        friend ostream& operator <<(ostream &lhs, const FractionalComplex &rhs);
    
        // Deconstructor
        ~FractionalComplex();
};

//=====================
// MARK: Friend methods
//=====================
ostream& operator <<(ostream &lhs, const FractionalComplex &rhs);
FractionalComplex operator*(const FractionalComplex&,  int);

#endif /* FractionalComplex_hpp */
