//
//  containerNotes.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/18/21.
//

#include <iostream>

// Sequence containers
#include <vector> // Like an array or ArrayList(java)
#include <deque> // double ended container
#include <list> // Container

// Associative containers
#include <set> // has set and multiset
#include <map> // includes multimap

using namespace std;


//MARK: Notes

/*
 
Two types
 - sequence containers and access data Sequentially. (like an array or vector)
    Types of sequences
        - Deque<T> double ended QUEue (can do insertion and deletion in both ends)
        - List<T>
 
 - Associative containers has order and the order can change. Primary users of iterators
    Types of associative
        - Set<T> does not allow for duplicates. Must have a defined < operator
        - Multiset<T> does allow for duplicates
        - Map<K, T> sometimes called associative array. No duplicates, but two keys can have the same value.
        - MultiMap<K, T> can have duplicates.
 */


// MARK: Examples

//int main() {
//    
//    // MARK: Deque
//    
////    deque<string> myNames;
////
////    // Add to the back
////    myNames.push_back("Fred");
////    myNames.push_back("Sue");
////    myNames.push_back("Joes");
////
////    // Add to the front
////    myNames.push_front("Amy");
////    myNames.push_front("Jimmy");
////
////    for(int i = 0; i < myNames.size(); i++) {
////        cout << myNames[i] << endl;
////    }
//    
//    
//    // MARK: Lists
//    
////    list<string> myNames;
////
////    // Add to the back
////    myNames.push_back("Fred");
////    myNames.push_back("Sue");
////    myNames.push_back("Joes");
////
////    // Add to the front
////    myNames.push_front("Amy");
////    myNames.push_front("Jimmy");
////
////    // FOr each loops are needed to print lists.
////    for(string x : myNames) {
////
////        cout << x << endl;
////
////    }
//    
//    // MARK: Sets
//    
//    // The only types of data, that you can put into a set
//    // are data types with a defined < operator
//    
//    // usefull methods
//    // count - used for multisets(answer is always zero or one in a normal set)
//    // find - returns true or false if it found the element.
//    // insert - to add
//    // size - returns the size
//    
////    set<int> myNumbers;
////
////    myNumbers.insert(5);
////    myNumbers.insert(7);
////    myNumbers.insert(12);
////    myNumbers.insert(99);
////
////    for(int x : myNumbers) {
////        cout << x << endl;
////    }
//    
//    
//    // MARK: Multiset
//    
////    multiset<int> myNumbers;
////
////    myNumbers.insert(5);
////    myNumbers.insert(7);
////    myNumbers.insert(12);
////    myNumbers.insert(99);
////    myNumbers.insert(5);
////    myNumbers.insert(9);
////    myNumbers.insert(9);
////
////    for(int x : myNumbers) {
////        cout << x << endl;
////    }
//    
//    // MARK: Map
//    
//    map<string, int> myPhoneBook;
//    
//    // How to add
//    // sue is the key and int(after the in =) is the value
//    myPhoneBook["Jenny"] = 8675309;
//    myPhoneBook["Sue"] = 1234567;
//    myPhoneBook["Larry"] = 5555555;
//    
//    cout << myPhoneBook["Larry"] << endl;
//    
//}
