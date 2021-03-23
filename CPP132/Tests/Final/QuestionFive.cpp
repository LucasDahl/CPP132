//
//  QuestionFive.cpp
//  CPP132
// This program has a function that will
// accept a vector of strings and add only the
// unique ons to a list an sort it.
//
//  Created by Lucas Dahl on 3/22/21.
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//using namespace std;
//
//// Prototypes
//list<string> makeList(const vector<string>);
//void printS(string);
//
//int main() {
//    
//    vector<string> theVector = {"And", "Bee", "Sea", "And", "Bee", "A", "The", "The", "Deed", "End"};
//
//    // Add the elements to the list
//    list<string> myList = makeList(theVector);
//    
//    // Print out the list
//    for_each(myList.begin(), myList.end(), printS);
//    cout << endl;
//    
//}
//
//// Prints out a string for a for_each loop
//void printS(string s) {
//    cout << s << " ";
//}
//
//// This function will add each unique element to the list
//list<string> makeList(const vector<string> theVect) {
//    
//    list<string> list;
//    
//    // Add each unique element to the list
//    for(int i = 0; i < theVect.size(); i++) {
//        
//        string temp = theVect[i];
//        bool found = (find(list.begin(), list.end(), temp) != list.end());
//        
//        // Make sure the string is not in the list
//        if(!found) {
//            list.push_back(temp);
//        }
//        
//    }
//    
//    // sort the list
//    list.sort();
//    
//    // return the list
//    return list;
//    
//}
