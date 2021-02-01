//
//  Vectors.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/1/21.
//

#include <iostream>
#include <vector>

//using namespace std; // More companies say not to use this, and use std::

// Example
struct Rectangle {
  
    int length;
    int width;
    
};

int main() {
    
    //std::vector<int*> myList;
    std::vector<int>                myList;
    std::vector<std::string>        myList2;
    std::vector<char>               myList3;
    std::vector<Rectangle>          myList4;
    std::vector<std::vector<int>>   myList5;
    std::vector<int>                myList6;
    std::vector<int>                myList7;
    
    // Add to the back
    myList.push_back(7);                    // [7]
    myList.push_back(3);                    // [7, 3]
    myList.push_back(1);                    // [7, 3, 1]
    // Using insert - uses an iterator
    myList.insert(myList.begin(), 9);       // [9, 7, 3, 1]            // myList.begin() puts 9 in the first spot
    myList.insert(myList.begin() + 1, 99);   // [9, 99, 7, 3, 1]           // puts 99 at the sceond spot
    
    std::cout << myList.size() << std::endl;
    std::cout << myList[0] << std::endl;
    
    // Print the vector
    for(int i = 0; i < myList.size(); i++) {
        std::cout << myList[i] << " ";
    }
    std::cout << std::endl;
    
    // Delete the last element
    myList.pop_back();
    
    // Print the vector
    for(int i = 0; i < myList.size(); i++) {
        std::cout << myList[i] << " ";
    }
    std::cout << std::endl;
    
    // Erase at certain index using an iterator.
    myList.erase(myList.begin() + 2); // Erase the 2nd item(remeber start at zero)
    
    // Print the vector
    for(int i = 0; i < myList.size(); i++) {
        std::cout << myList[i] << " ";
    }
    std::cout << std::endl;
    
    // other commands
//    myList.clear(); // clears the list
//    myList.empty() // returns a bool
    //std::cout << myList[1] // functionally the same as myList.at(1);
    // swap swaps vectors not elements
    
    
    // Example of swap
    
    // Put data in list 6 and 7
    myList7.push_back(7);
    myList7.push_back(5);
    myList7.push_back(3);
    myList7.push_back(9);
    myList7.push_back(99);
    myList7.push_back(87);
    
    for(int i = 0; i < 6; i++) {
        myList6.push_back(i);
    }
    
    // Print the data
    
    // Before
    for(int i = 0; i < myList6.size(); i++) std::cout << myList6.at(i) << " " << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < myList7.size(); i++) std::cout << myList7.at(i) << " " << std::endl;
    
    myList6.swap(myList7);
    
    // After
    for(int i = 0; i < myList6.size(); i++) std::cout << myList6.at(i) << " " << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < myList7.size(); i++) std::cout << myList7.at(i) << " " << std::endl;
    
}
