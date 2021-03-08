//
//  RecursionMiniAssignmentOne.cpp
//  CPP132
//
// This program uses a function called sumTo
// to return the sum of all number up to n.
//
//  Created by Lucas Dahl on 3/4/21.
//


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Prototype
//double sumTo(int);
//
//int main() {
//    
//    // Five examples
//    cout << sumTo(2) << endl;
//    cout << sumTo(6) << endl;
//    cout << sumTo(100) << endl;
//    cout << sumTo(2500) << endl;
//    
//    // Show that the error catch work
//    try {
//        cout << sumTo(-5) << endl;
//    } catch(string e) {
//        cout << "ERORR: " << e << endl;
//    }
//}
//
//// This function will retunr the sum of all numbers up to n.
//double sumTo(int n) {
//    
//    if(n < 0) {
//        throw string("Value cannot be less than zero");
//    }
//    
//    if(n == 0) {
//        return 0.0;
//    }
//    
//    return sumTo(n - 1) + (1.0 / n);
//    
//}
