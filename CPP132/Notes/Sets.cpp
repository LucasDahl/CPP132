//
//  Sets.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/25/21.
//

#include <iostream>
#include <set>
#include <algorithm>

using namespace::std;

struct Card {
    int num;
    char suit;
};

void printI(int x) { cout << x << " ";}
void printCard(Card x) { cout << "{" << x.num << x.suit << "} ";}

bool operator <(const Card &lhs, const Card &rhs) {
    if (lhs.num != rhs.num) return lhs.num < rhs.num;
    return lhs.suit < rhs.suit;
}

//struct CompareCard {
//    bool operator()(const Card lhs, const Card rhs) {
//        return lhs.suit < rhs.suit;
//    }
//};

//int main() {
//    
//    
//    std::set<int> mySet;
//    std::multiset<int> mySet2;
//    multiset<Card> myDeck; // Has to have a less than operator sinc under the hood it uses a binary tree
//    //set<Card, CompareCard> myDeck; // can also do this. usaully define an operator like <
//    
//    myDeck.insert({1, 'S'});
//    myDeck.insert({2, 'S'});
//    myDeck.insert({3, 'S'});
//    myDeck.insert({2, 'H'});
//    myDeck.insert({3, 'H'});
//    myDeck.insert({3, 'S'});
//    myDeck.insert({4, 'D'});
//    
//    mySet.insert(10);
//    mySet.insert(20);
//    mySet.insert(50);
//    mySet.insert(40);
//    mySet.insert(30);
//    mySet.insert(10); // wont be added since 10 is already in it
//    
//    mySet2.insert(10);
//    mySet2.insert(20);
//    mySet2.insert(50);
//    mySet2.insert(40);
//    mySet2.insert(30);
//    mySet2.insert(10); // Already have a 10 in the set, so it will have a count of "2"
//    
//    for_each(myDeck.begin(), myDeck.end(), printCard);
//    cout << endl;
//    
//    
//    //mySet.clear(); // clears the set
//    
//    // Print method 1 - with a set - use an algorithm
////    for_each(mySet.begin(), mySet.end(), printI);
////    cout << endl;
////
////    for_each(mySet2.begin(), mySet2.end(), printI);
////    cout << endl;
////
////    for_each(myDeck.begin(), myDeck.end(), printCard);
////    cout << endl;
////
////    // Print method 2 - Use a for loop with iterators
////    // Iterators are pointers, so * is needed
////    for(set<int>::iterator x = mySet.begin(); x != mySet.end(); x++) {
////        cout << *x << " ";
////    }
////
////    // or
//////    for(auto x = mySet.begin(); x != mySet.end(); x++) {
//////        cout << *x << " ";
//////    }
////
////    cout << endl;
////
////    // Print method 3 - use a for each loop
////    for(auto x : mySet) {
////        cout << x << " ";
////    }
////
////    cout << endl;
//    
//    // rend and rbeign is reverse (reverse iterators that are still called forward operators because the go forward one direction)
////    for_each(mySet.rbegin(), mySet.rend(), printI);
////    cout << endl;
////
////    cout << mySet.size() << "/" << mySet.max_size() << endl;
////    cout << mySet.count(10) << " " << mySet.count(15);
//    
//}
