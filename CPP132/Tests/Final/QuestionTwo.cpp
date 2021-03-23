//
//  QuestionTwo.cpp
//  CPP132
//  This program should then find and return the largest value when any number is divided by the sum of the other two.
//
//  Created by Lucas Dahl on 3/22/21.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Prototype
//double triDivide(double, double, double);
//
//int main() {
//    
//    // Properties
//    double x;
//    double y;
//    
//    // set x
//    try {
//        
//        x = triDivide(1.1, 2.2, 3.3);
//        
//    } catch(string error) {
//        
//    }
//    
//    cout << x << endl;
//    
//    // Throw error
//    try {
//        
//        y = triDivide(1.1, -2, 3.3);
//        
//    } catch(string error) {
//        cout << error << endl;
//    }
//
//}
//
//// This function will find and return the largest value when any number is divided by the sum of the other two.
//double triDivide(double a, double b , double c) {
//    
//    // Properties
//    double aNum;
//    double bNum;
//    double cNum;
//    
//    // Make sure there are no numbers below or equal to zero
//    if(a <= 0.0 || b <= 0.0 || c <= 0.0) throw string("Cannot have numbers less than or equal to zero");
//    
//    // Set the values
//    aNum = a / (b + c);
//    bNum = b / (a + c);
//    cNum = c / (b + a);
//    
//    if(aNum > bNum && aNum > cNum) {
//        return aNum;
//    } else if(bNum > aNum && bNum > cNum) {
//        return bNum;
//    } else {
//        return cNum;
//    }
//}
