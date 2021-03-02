//
//  recursionNotes.cpp
//  CPP132
//
//  Created by Lucas Dahl on 3/1/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void foo2(int);

void foo(int x) {
    if(x == 1) return;
    
    cout << "This is foo running" << endl;
    foo(x - 1);
    cout << "This is foo quitting" << endl;
}

// Indirect recusion
void foo2(int x) {
    foo(x - 1);
}

// F! = f * f-1 * f-2..... 3..2..1
// Remeber that in CS ! is "not"
int factorial(int x) {
    
    // Base case
    if(x == 1) return 1;
    // Recursion
    else return factorial(x - 1) * x;
    
}

int gcd(int x, int y) {
    
    if(x % y == 0) return y;
    else return gcd(y, x % y);
}

//int main() {
//    //foo(2);
//    cout << factorial(1) << endl;
//    cout << factorial(5) << endl;
//    cout << factorial(7) << endl;
//    cout << factorial(10) << endl;
//    
//    cout << gcd(12, 18);
//    
//}
