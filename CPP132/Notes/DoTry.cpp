//
//  DoTry.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/16/21.
//

#include <iostream>
#include <string>

using namespace std;

// throw goes into a method

int totalDays(int days, int weeks) {
    if((days < 0) || (days > 7)) {
        throw string("Invalid number of days"); // if string is not there, its a char array
    } else {
        return (7 * weeks + days);
    }
}

int positiveRoot(double a, double b, double c) {
    
    if(a == 0) throw string("DIVBYZERO");
    double tmp = b * b - 4 * a * c;
    
    if(tmp < 0) throw string("NEGATIVEROOT");
    
    tmp = sqrt(tmp);
    tmp = -1 * b + tmp;
    tmp = tmp / (2 * a);
    
    return tmp;;
    
}

//int main() {
//    
////    int x;
////
////    try {
////        //x = totalDays(5, 4);
////        x = totalDays(-1, 4);
////    } catch (string e) {
////
////        // something went wrong
////        cout << "ERROR HAPPENED" << endl;
////        cout << "TOTAl days set to -99" << endl;
////
////        x = -99;
////    }
////
////    cout << x << " Days" << endl;
//    
//    double z;
//    
//    // DONT DO
////    try {
////       // z = positiveRoot(1, -5, 6); // good
////        //z = positiveRoot(0, -5, 6); // throws string
////        z = positiveRoot(1, -5, 6); // throws int
////    } catch(string e) {
////        cout << "You cannot divide by zero" << endl;
////        z = -99;
////    } catch(int e) {
////        cout << "You cannot square root a negative" << endl;
////        z = -99;
////    }
//    
//    //DO
//    try {
//       // z = positiveRoot(1, -5, 6); // good
//        //z = positiveRoot(0, -5, 6); // throws string
//        z = positiveRoot(1, -5, 6); // throws int
//    } catch(string e) {
//        
////        if(e == "NEGATIVEROOT") {
////            cout << "You cannot square root a negative" << endl;
////            z = -99;
////        } else if(e == "DIVBYZERO") {
////            cout << "You cannot divide by zero" << endl;
////            z = -99;
////        }
//        
//        // OR - cerr is console output error codes(puts it out to where the errors go)
//        cerr << "Error: " << e << endl;
//        
//    }
//
//    cout << "The root is " << z << endl;
//    
//}

