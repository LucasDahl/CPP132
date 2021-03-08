//
//  triviaMain.cpp
//  CPP132
//
// This is the main program
// That will setup the triva game,
// with trivia objects.
//
//  Created by Lucas Dahl on 3/8/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include "TriviaQuestion.hpp"

using namespace std;

int main() {
    
    // Properties
    string fileName;
    ifstream inputFile;
    int numberOfQuestions;
    
    // Ask to open the file
    cout << "Please eneter a file to open.";
    cin >> fileName;
    
    // try and open the file
    inputFile.open(fileName);
    
    if(inputFile) {
        
    } else {
        
        // MAYBE CHANGE? Print the error
        cerr << "Error: " << strerror(errno);
        
        // Exit the file
        exit(1);
        
    }
    
}
