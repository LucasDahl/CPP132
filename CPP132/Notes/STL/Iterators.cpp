//
//  Iterators.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/19/21.
//

#include <iostream>
#include <vector>
#include <forward_list>
#include <list>

using namespace std;

//MARK: Notes

/*
 Iterators is the way to access elements in containers
    - They are flexable
    - If we change the container it makes it easy to change the iterators to keep everything working
    - all STL algorthims use Iterators
    - Iterators do not bound check
 

 */


// MARK: Examples

int main() {

    // Containers dictate what iterator to use.
//    forward_list<int> a;
//    forward_list<int>::iterator ptra; // iterator for forward list.
    
    vector<string> myNames;
    list<string> friends;
    
    myNames.push_back("todd");
    myNames.push_back("todders");
    myNames.push_back("Howard");
    myNames.push_back("hello");
    
    friends.push_back("joe");
    friends.push_back("amy");
    friends.push_back("MIndy");
    
    // Iterator - don't need std if using namespace
    // iterator is kinda like a pointer
    std::vector<string>::iterator ptr; // not locked in for one object(must be the same type) (can make 2 on oneline)
    
    // How to use for loop with iterators - called STL loop approach
    // can instantiate iterator in foor loop(like int i = 0)
    for(ptr = myNames.begin(); ptr != myNames.end(); ptr++) {
        cout << *ptr << endl;
    }
    
    // .end() does not actually exist.
    // signals that there are no elements left
    vector<string>::iterator x;
    x = myNames.begin();
    
    cout << *x << endl;
    
    // Since .end() doesnt exist, you can do:
    vector<string>::iterator y;
    y = myNames.end();
    
    // back up one step.
    // can also do ++;
    y--;
    
    cout << *y << endl;
    
    // can also do
    vector<string>::iterator z;
    z = myNames.end();
    
    z = z - 2;
    
    cout << *z << endl;
    
    
    // list
    list<string>::iterator fptr;
    
    //*iter = *iter = 2 // changes data

    

}
