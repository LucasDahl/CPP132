//
//  Algorithms.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/22/21.
//

#include <iostream>
#include <algorithm> // STL algorthms that don't involve numbers
#include <numeric> // STL algorthms that do involve numbers

#include <vector>
#include <forward_list>
#include <list>

using namespace std;

// MARK: Notes

/*
 
 Almost all algorithm and numeric replaces for loops
 They use iterators, but no need to create them
 algorithms don't remove, leave it to the vector
 
 Types
 
 Algorithms
    
 numeric
 
 */

// MARK: Examples

string addWithComma(string x, string y) {
    return x + ", " + y;
}

void printMe(string x) {
    cout << x << endl;
}

void doP(string x) { cout << x << " ";}

void printS(string x) { cout << x << " ";}

int main() {
    
    vector<string> v;
    
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");
    v.push_back("F");
    v.push_back("G");
    v.push_back("H");
    v.push_back("I");
    
    for_each(v.begin(), v.end(), printS);
    cout << endl;

    
    // auto = vector<string>::iterator
    // auot will infer typ
    auto y = 10 + 12;
    
    auto x = find(v.begin(), v.end(), string("C"));
    
    for(auto x = v.begin(); x != v.end(); x++) {
        //do what we need
    }

}

// Takes the last two elements and swaps them
//    next_permutation(v.begin(), v.end());
//
//    // goes backwards
//    prev_permutation(v.begin(), v.end());
//
//    for_each(v.begin(), v.end(), printS);
//    cout << endl;
//

//vector<string> v;
//
//v.push_back("A");
//v.push_back("B");
//v.push_back("C");
//v.push_back("D");
//v.push_back("E");
//v.push_back("F");
//v.push_back("G");
//v.push_back("H");
//v.push_back("I");
//
//for_each(v.begin(), v.end(), printS);
//cout << endl;
//
//// puts the first 4 to the back and makes the fourth the
//// front
//rotate(v.begin(), v.begin() + 4, v.end());
//
//
//for_each(v.begin(), v.end(), printS);
//cout << endl;
//
////                                                     this is what it finds
//vector<string>::iterator x = find(v.begin(), v.end(), string("E"));
//
//if(x == v.end()) {
//    //This means we didnt find the element
//    cout << "Not found...";
//} else {
//    *x = "EE";
//}
//
//for_each(v.begin(), v.end(), printS);
//cout << endl;


// This will add all the values of the vector
//    vector<int> nums;
//    int x;
//
//    for(int i = 0; i < 10; i++) {
//        nums.push_back(i);
//    }
//
//    x = accumulate(nums.begin(), nums.end(), 0);
//
//    cout << x << endl;

//vector<string> names;
//string x;
//
//names.push_back("Fred");
//names.push_back("Sue");
//names.push_back("Amy");
//names.push_back("Mindy");
//names.push_back("Joe");

// There are two versions of accumulate
//x = accumulate(names.begin(), names.end(), string("")); //one

//             start the loop          end           start      function added
//    x = accumulate(names.begin() + 1, names.end(), *names.begin(), addWithComma); // 2
//
//    cout << x << endl;

// How we print using STL(printMe is something you must define)
//    for_each(names.begin(), names.end(), printMe);
//    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//        auto rng = default_random_engine(seed);
//        shuffle(myVector.begin(), myVector.end(),  rng  );



// Remove certain items

//vector<string> myVector = {"CC","CC","Z","CC","B","CC","D","CC","EE"};
//
//    myVector.erase(             remove(myVector.begin(), myVector.end(), "CC"),                         myVector.end());
//    // from vector erase        run remove algorithm, to fin the back ebd, use that itr as the start    erase to end()

// With iterator
//vector<string>::iterator badStuffStart;
//badStuffStart = remove(myVector.begin(), myVector.end(), "CC");
//myVector.erase(badStuffStart, myVector.end());
//
//// OR
//myVector.erase(remove(myVector.begin(), myVector.end(), "B"), myVector.end()); // Same as above
//
//for_each(myVector.begin(), myVector.end(), doP);

// Shuffle
//auto rng = default_random_engine {};
//shuffle(myVector.begin(), myVector.end(), rng);
