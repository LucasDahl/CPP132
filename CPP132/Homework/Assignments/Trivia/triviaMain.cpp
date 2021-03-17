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
#include <random>
#include <algorithm>
#include "TriviaQuestion.hpp"
#include "ExtraFunctions.h"

using namespace std;

// Prototype
void getQuestions(ifstream&, vector<TriviaQuestion*>&);

int main() {
    
    // Properties
    string fileName;
    ifstream inputFile;
    int numberOfQuestions;
    int earnedPoints = 0;
    vector<TriviaQuestion*> questions;
    
    // Ask to open the file
    cout << "Please eneter a file to open. ";
    cin >> fileName;
    
    if(fileName.find(".txt") == string::npos) { // Can I use?
        fileName += ".txt";
    }

    // try and open the file
    // add .txt if its not there
    // shuffle up answer order, correct answer is always first in the file
    inputFile.open(fileName);
    
    if(inputFile) {
        
        getQuestions(inputFile, questions);
        
    } else {
        
        // MAYBE CHANGE? Print the error
        cout << "File " << fileName << "not found, exiting program now." << endl;
        
        // Exit the file
        exit(1);
        
    }
    
    
    // Ask the user how many questions they want to answer.
    cout << "How many quesyions do you want?" << endl;
    cout << "--> ";
    cin >> numberOfQuestions;


    for(int i = 0; i < numberOfQuestions; i++) {
        earnedPoints += questions[i]->askQuestion();
        cout << endl;
    }
    
    
    cout << "You earned " << earnedPoints << " points!" << endl;
    
    // Delete the vector
    questions.clear();
    
}

// This method will setup all the Trivia questions and shuffle them
void getQuestions(ifstream& inputFile, vector<TriviaQuestion*> &questions) {
    
    // Properties
    string currentLine;
    
    
    // When reading file use type to get type of question
    while(getline(inputFile, currentLine)) {

        // Get the data and type of question
        string type(currentLine, 0, currentLine.find(" "));
        currentLine.erase(0, type.length() + 1);
        string data(currentLine, 0, currentLine.length());

        // Create the object for the vector
        if(type == "FIB") {
            
            questions.push_back(new FillInTheBlank(data));
            
            
        } else if(type == "MC3") {
            
            questions.push_back(new ThreePartMultipleChoice(data));

        } else if(type == "MC4") {
            
            questions.push_back(new FourPartMultipleChoice(data));

        } else if(type == "NUM") {
            
            questions.push_back(new NumbericQuestion(data));

        } else if(type == "TOF") {
            
            questions.push_back(new TrueOrFalse(data));
            
        }
    }
    
    // Shuffle the questions
    //MARK: NOT WORKING
    auto random = default_random_engine{};
    shuffle(begin(questions), end(questions), random);
    
}
