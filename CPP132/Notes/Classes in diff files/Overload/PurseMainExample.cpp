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
    Purse p4(p3); // This used the copy constructor. Can be written as Purse p4 = p3.
    Purse p5(1,1);
    
    // P2 is the assumed LHS, while p3 is goven RHS.
    //(p2 + p3).printData();
    
//    p1 = p2 + p3;
//    p1.printData();
    
    // Makes p1 equal to the purse p3 plus 12 copper.
    p1 = p3 + 12;
    p1.printData();
    
    p1 = 11 + p3;
    p1.printData();
    

    return 0;
    
}
