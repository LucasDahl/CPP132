//
//  RecursionAssignmentTwo.cpp
//  CPP132
//
// This program will use a function called writeChar
// that will print out <<*>> or <<**>>. THe size
// will depend on the passed in int.
//
//  Created by Lucas Dahl on 3/4/21.
//



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Prototype
//void writeChar(int);
//
//int main() {
//    
//    // Five examples
//    writeChar(1);
//    cout << endl;
//    
//    writeChar(2);
//    cout << endl;
//    
//    writeChar(5);
//    cout << endl;
//    
//    writeChar(20);
//    cout << endl;
//    
//    writeChar(99);
//    cout << endl;
//    
//}
//
//// This method will print out either <,*,>
//// recursivly based off the passed in int.
//void writeChar(int n) {
//    
//    if (n <= 0) {
//        return;
//    }
//    
//    if(n == 1) {
//        cout << "*";
//    } else if(n == 2) {
//        cout << "**";
//    } else {
//        cout << "<";
//        writeChar(n - 2);  // Recursion
//        cout << ">";
//    }
//
//}
