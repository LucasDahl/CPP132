//
//  TriviaQuestion.cpp
//  CPP132
//
// This is the file for the TrivaQuestion
// Class that will define the methods.
//
//  Created by Lucas Dahl on 3/8/21.
//


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "ExtraFunctions.h"
#include "TriviaQuestion.hpp"

using namespace std;

//========================
// MARK: TriviaQuestion
//========================

// Constructors ===========================

// This is the default constructor
TriviaQuestion::TriviaQuestion() {
    points = 0;
    question = "No Questions";
    data = "No Data";
    answer = "No answer";
    choices;
}

// Methods ================================

int TriviaQuestion::getMax() {
    return points;
}

// This method will set the fields for teh class
void TriviaQuestion::setData(string data) {
    
    string pointsStr(data, 0, data.find(" "));
    data.erase(0, pointsStr.length());
    string question(data, 0, data.find(":"));
    data.erase(0, question.length());
    string possibleAnswers(data, 0, data.length());
    
    // Trim the data
    pointsStr = trim(pointsStr);
    possibleAnswers = trim(possibleAnswers);
    
    // Set the data
    this->question = trim(question);
    points = stoi(pointsStr);
    setChoices(possibleAnswers);
    answer = choices[0];
    
    // Shuffle the choices randomly so the first one is not always the answer
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine random(seed);
    shuffle(choices.begin(), choices.end(), random);

}

// This method will set all the choices for the questions.
void TriviaQuestion::setChoices(string possibleAnswers) {

    // Properties
    string delimiter = ":";
    size_t postion = 0;
    string currentStr;
    
    // Take out the first colon
    possibleAnswers = possibleAnswers.substr(1, possibleAnswers.length());
    
    // Parse the sting and get each option
    while ((postion = possibleAnswers.find(delimiter)) != std::string::npos) {
        currentStr = possibleAnswers.substr(0, postion);
        choices.push_back(trim(currentStr));
        possibleAnswers.erase(0, postion + delimiter.length());
    }
    
    
    // Add the last option
    choices.push_back(trim(possibleAnswers));
    
}

//========================
// MARK: FillInTheBlank
//========================

// Constructors ===========================

// This constructor will set all the data
FillInTheBlank::FillInTheBlank(string data) {
    setData(data);
}


// Methods ===============================

// This method will present the questions to the user
// and return the amount of poit earned.
int FillInTheBlank::askQuestion() {

    // Properties
    string userAnswer;
    string lowerAnswer;
    string upperAnswer;
    
    cout << "This is fill in blank question worth " << getMax() << " point(s), please type in your answer." << endl << endl;
    cout << "Question: " << question << endl;
    cout << "--> ";
    cin >> userAnswer;
    
    // Make space
    cout << endl;
    
    // Get the users answer in caps or lower
    userAnswer[0] = toupper(userAnswer[0]);
    upperAnswer = userAnswer;
    userAnswer[0] = tolower(userAnswer[0]);
    lowerAnswer = userAnswer;
    
    
    // Check the answer
    if(answer == upperAnswer || answer == lowerAnswer) {
        cout << "CORRECT" << endl;
        return getMax();
    } else {
        cout << "Incorrect, the answer was " << answer << "." << endl;
        return 0;
    }
    
}

//===================================
// MARK: ThreePartMultipleChoice
//===================================

// Constructors ===========================

// This constructor will set all the data
ThreePartMultipleChoice::ThreePartMultipleChoice(string data) {
    setData(data);
}


// Methods ================================

// This method will present the questions to the user
// and return the amount of poit earned.
int ThreePartMultipleChoice::askQuestion() {
    
    // Properties
    string userAnswer;
    
    cout << "This is a three part multiple choice worth " << getMax() << " point(s), please type a number." << endl << endl;
    cout << "Question: " << question << endl;
    for(auto i = 0; i < choices.size(); i++) {
        cout << i + 1 << ": " << choices[i] << endl;
    }
    cout << "--> ";
    cin >> userAnswer;
    
    // Make space
    cout << endl;
    
    // Make sure to get the string value of user input
    // If it the user didnt anser a number, its wrong.
    if(isdigit(userAnswer[0])) {
        userAnswer = choices[stoi(userAnswer) - 1]; // Check if this is okay
    } else {
        cout << "You did not eneter a number." << endl;
        userAnswer = "0";
    }
    
    // Check the answer
    if(answer == userAnswer) {
        cout << "CORRECT" << endl;
        return getMax();
    } else {
        cout << "Incorrect, the answer was " << answer << "." << endl;
        return 0;
    }
}

//==================================
// MARK: FourPartMultipleChoice
//==================================

// Constructors ===========================

// This constructor will set all the data
FourPartMultipleChoice::FourPartMultipleChoice(string data) {
    setData(data);
}

// Methods ================================

// This method will present the questions to the user
// and return the amount of poit earned.
int FourPartMultipleChoice::askQuestion() {
    
    // Properties
    string userAnswer;
    
    cout << "This is a four part multiple choice worth " << getMax() << " point(s), please type a number." << endl << endl;
    cout << "Question: " << question << endl;
    for(auto i = 0; i < choices.size(); i++) {
        cout << i + 1 << ": " << choices[i] << endl;
    }
    cout << "--> ";
    cin >> userAnswer;
    
    // Make space
    cout << endl;
    
    // Make sure to get the string value of user input
    // If it the user didnt anser a number, its wrong.
    if(isdigit(userAnswer[0])) {
        userAnswer = choices[stoi(userAnswer) - 1];
    } else {
        cout << "You did not eneter a number." << endl;
        userAnswer = "0";
    }
    
    // Check the answer
    if(answer == userAnswer) {
        cout << "CORRECT" << endl;
        return points;
    } else {
        cout << "Incorrect, the answer was " << answer << "." << endl;
        return 0;
    }
}


//=====================
// MARK: TrueOrFalse
//=====================

// Constructors ===========================

// This constructor will set all the data
TrueOrFalse::TrueOrFalse(string data) {
    setData(data);
}

// Methods ================================

// This method will present the questions to the user
// and return the amount of poit earned.
int TrueOrFalse::askQuestion() {
    
    // Properties
    string userAnswer;
    
    cout << "This is a True or False question worth " << getMax() << " point(s), please enter True or False." << endl << endl;
    cout << "Question: " << question << endl;
    cout << "--> ";
    cin >> userAnswer;

    // Make space
    cout << endl;
    
    // Make sure the first letter is upper
    userAnswer[0] = toupper(userAnswer[0]);
    
    // Check the answer
    if(answer == userAnswer) {
        cout << "CORRECT" << endl;
        return getMax();
    } else {
        cout << "Incorrect, the answer was " << answer << "." << endl;
        return 0;
    }
}

//===========================
// MARK: NumbericQuestion
//===========================

// Constructors ===========================

// This constructor will set all the data
NumbericQuestion::NumbericQuestion(string data) {
    setData(data);
}

// Methods ================================

// This method will present the questions to the user
// and return the amount of poit earned.
int NumbericQuestion::askQuestion() {
    
    // Properties
    string userAnswer;
    
    cout << "This is fill in numberic question worth " << getMax() << " point(s), please type in your answer." << endl << endl;
    cout << "Question: " << question << endl;
    cout << "--> ";
    cin >> userAnswer;
    
    // Make space
    cout << endl;
    
    // Check the answer
    if(answer == userAnswer) {
        cout << "CORRECT" << endl;
        return getMax();
    } else {
        cout << "Incorrect, the answer was " << answer << "." << endl;
        return 0;
    }
}
