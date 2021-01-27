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
    
        // Properties
        int i = sqrt(-1); // Update?
        int a;
        int b;
        int c;
        int d;
    
        // Methods
        void reduce();

    public:
    
        // Constructors
        FractionalComplex();
        FractionalComplex(int, int);
        FractionalComplex(int, int, int, int);
    
        // Methods
        void printme();
        double length();
    
        // Overload
        FractionalComplex operator + (const FractionalComplex&);
        FractionalComplex operator - (const FractionalComplex&);
        FractionalComplex operator * (FractionalComplex&);
    
        friend ostream& operator <<(ostream &lhs, const FractionalComplex &rhs);
    
        FractionalComplex operator++();
        FractionalComplex operator++(int);
    
        int operator *(int);
    
        bool operator < (FractionalComplex);
        bool operator > (FractionalComplex);
        bool operator == (FractionalComplex);
    
};

//=====================
// MARK: Friend methods
//=====================
ostream& operator <<(ostream &lhs, const FractionalComplex &rhs);

#endif /* FractionalComplex_hpp */
