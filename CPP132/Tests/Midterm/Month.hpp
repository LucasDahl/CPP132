//
//  Month.hpp
//  CPP132
// This is the month class header file
//  Created by Lucas Dahl on 2/5/21.
//

#ifndef Month_hpp
#define Month_hpp

#include <iostream>
#include <string>
using namespace std;

class Month {
  
    private:
    
        // Fields
        int month;
        int year;

    
    public:
        
        // Constructors
        Month();
        Month(int);
        Month(int, int = 1);
    
        // Methods
        string toString() const;
    
        // Operators
        Month operator++();
        Month operator++(int);
    
        // Output
        friend ostream& operator <<(ostream &lhs, const Month &rhs);
    
};

// Friend functions
ostream& operator <<(ostream &lhs, const Month &rhs);

#endif /* Month_hpp */
