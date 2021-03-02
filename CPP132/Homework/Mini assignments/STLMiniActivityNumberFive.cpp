//
//  STLMiniActivityNumberFive.cpp
//  CPP132
//
// This program is used to call a function
// called removeShortWords that will
// remove strings with a length of
// 3 or less from a vector.
//
//  Created by Lucas Dahl on 2/25/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Prototype
//bool stringRemove(string);
//void printString(string);
//void removeShortWords(vector<string>&);
//
//int main() {
//    
//    vector<string> myList;
//    myList.push_back("ABCDEF");
//    myList.push_back("ABCDE");
//    myList.push_back("AB");
//    myList.push_back("A");
//    myList.push_back("ABC");
//    myList.push_back("ABCDEFGH");
//    myList.push_back("ABCEDFGH");
//    myList.push_back("123");
//    myList.push_back("12");
//    myList.push_back("1");
//    myList.push_back("12345");
//    
//    // Print out the vector before the modify - YOU WRITE THIS CODE
//    for_each(myList.begin(), myList.end(), printString);
//    cout << "****" << endl;
//    removeShortWords(myList);
//    // Print out the vector after the modify  - YOU WRITE THIS CODE
//    for_each(myList.begin(), myList.end(), printString);
//}
//
//// This m,ethod prints out the vector
//void printString(string s) {
//    cout << s << endl;
//}
//
//// This method will remove any string that
//// has a length of 3 or less
//bool stringRemove(string str) {
//    return str.length() <= 3;
//}
//
//// This method iterates throught the vector
//// and calls the method stringremove to remove
//// strings that have a length of 3 or less
//void removeShortWords(vector<string> &list) {
//    
//    list.erase(remove_if(list.begin(), list.end(), stringRemove), list.end());
//    
//}
