//
//  stackQueue.cpp
//  CPP132
//
//  Created by Lucas Dahl on 3/10/21.
//

#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

// In modern c++, an int is 4 bytes long
// long is also the same size
//
//int main() {
//    
//    // Both the stack and queue have iterators, but we don't use them
//    
////    stack<int> myStack;
////
////    myStack.push(6);
////    myStack.push(8);
////    myStack.push(10);
////    myStack.push(12);
////    myStack.push(14);
////    myStack.push(16);
//////    myStack.pop(); // takes elements off
//////    myStack.size();
//////    myStack.empty(); // it returns bool(its really if its emtpy
//////    cout << myStack.size() << endl;
//////    cout << myStack.empty() << endl;
//////    //cout << myStack.pop() << endl; // In c++ pop DOES NOT return the value, it just removes the last element. This line cannot run
//////    cout << myStack.top() << endl; // this is instead of pop to get the last element, but it doesn't remove it. In c++ its a two step process
//////    // so
//////    myStack.pop();
//////    cout << myStack.top() << endl;
////
////    // common to use with while loops
////
////    // This shows the top element
////    // Then removes it
////    while(!myStack.empty()) {
////        cout << myStack.top() << endl;
////        myStack.pop();
////    }
//    
//    
//    // Queues
//    
//    // With queues its whos in front
//    
//    queue<int> myQueue;
//    
//    myQueue.push(10);
//    myQueue.push(20);
//    myQueue.push(30);
//    
//    cout << myQueue.front() << endl;
//    cout << myQueue.front() << endl;
//    
//    myQueue.pop();
//    
//    cout << myQueue.front() << endl;
//    
//}
