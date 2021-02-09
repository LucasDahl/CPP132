//
//  QuestionFour.cpp
//  CPP132
// This file contains a method that will take a sentence with
// no space and add a space at each uppercse.
//  Created by Lucas Dahl on 2/5/21.
//

#include <iostream>
#include <string>

using namespace std;

string produceString(string);

//int main() {
//    
//    cout << produceString("StopAndSmellTheRoses.") << endl;
//    
//    
//}

string produceString(string str) {
    
    // Properties
    string newString;
    
    // SHould have checked if the string is 0 or 1.
    if(str.length() <= 1) {
        newString = str;
        return newString;
    }
    
    // Loop throught the passed in string
    for(int i = 0; i < str.length(); i ++) {
        
        if(i == 0) {
            
            // It is the first letter of the string
            newString = str[i];
        } else if(isupper(str[i]) && i > 0) {
            
            // The letter is an uppercase so add a sapce and then the letter
            newString += " ";
            
            // Make it lower
            newString += tolower(str[i]);
        } else {
            
            // only add teh current letter.
            newString += str[i];
        }
    }
    
    // Return the new string
    return newString;
}
