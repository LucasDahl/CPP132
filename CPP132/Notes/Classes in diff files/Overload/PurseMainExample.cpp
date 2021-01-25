//
//  PurseMainExample.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/25/21.
//

#include <iostream>
#include <string>
#include "Purse.hpp"

using namespace std;

int main() {
    
    // Purse properties
    Purse p1;
    Purse p2(100);
    Purse p3(5, 3, 2);
    Purse p4 = p3; // This used the copy constructor.
    Purse p(1,1);
    
    p1.printData();
    p2.printData();
    p3.printData();
    p4.printData();
    
    
}
