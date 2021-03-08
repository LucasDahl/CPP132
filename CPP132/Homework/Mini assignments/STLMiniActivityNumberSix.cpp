//
//  STLMiniActivityNumberSix.cpp
//  CPP132
//
// This program will sort a vector of
// songs, but place any with "Me First at
// the front.
//
//  Created by Lucas Dahl on 2/25/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Prototype
//void BiasedSort(vector<string>&);
//void printString(string);
//bool compareString(string, string);
//
//int main() {
//    
//    vector<string> myList;
//    myList.push_back("Song 1");
//    myList.push_back("Song 5");
//    myList.push_back("A Song 2");
//    myList.push_back("Song 2");
//    myList.push_back("Song 3");
//    myList.push_back("Me First Song 3");
//    myList.push_back("Song 7");
//    myList.push_back("Song 8");
//    myList.push_back("Me First Song 2");
//    myList.push_back("Song 4");
//    myList.push_back("Song 6");
//    myList.push_back("A Song 1");
//    myList.push_back("Me First Song 1");
//    
//    // Print out the vector before the sort
//    for_each(myList.begin(), myList.end(), printString);
//    cout << "****" << endl;
//    BiasedSort(myList);
//    // Print out the vector after the sort
//    for_each(myList.begin(), myList.end(), printString);
//}
//
//
//// This fucntion prints out the vector
//void printString(string s) {
//    cout << s << endl;
//}
//
//// This fucntion will compare two strings
//// and put any with "Me First" at the front
//bool compareString(string lhs, string rhs) {
//    if(!lhs.find("Me First") && rhs.find("Me First")) {
//        return true;
//    } else if(lhs.find("Me First") && !rhs.find("Me First")) {
//        return false;
//    } else {
//        return lhs < rhs;
//    }
//
//}
//
//// THis function sorts the list.
//void BiasedSort(vector<string> &list) {
//    sort(list.begin(), list.end(), compareString);
//}
