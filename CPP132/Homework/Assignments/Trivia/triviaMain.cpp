//
//  triviaMain.cpp
//  CPP132
//
// This is the main program
// That will setup the triva game with trivia objects.
// It will also show the user their total score after the
// game has ended.
//
//  Created by Lucas Dahl on 3/8/21.
//

//#include <iostream>
//#include <string>
//#include <fstream>
//#include <random>
//#include <algorithm>
//#include "TriviaQuestion.hpp"
//#include "ExtraFunctions.h"
//
//using namespace std;
//
//// Prototype
//void getQuestions(ifstream&, vector<TriviaQuestion*>&);
//void openFile(vector<TriviaQuestion*>&);
//void printOutQuestions(vector<TriviaQuestion*> &);
//void getScore(int, int, int);
//void getFile(string);
//void openingMessage();
//int amountOfQuestions();
//
//int main() {
//    
//    // Properties
//    vector<TriviaQuestion*> questions;
//    
//    // This displays the opening message
//    openingMessage();
//    
//    // Opens the file and sets the questions.
//    openFile(questions);
//    
//    // Print out the questions for the user
//    printOutQuestions(questions);
//
//    // Delete the vector
//    questions.clear();
//    
//}
//
//// This method will setup all the Trivia questions and shuffle them
//void getQuestions(ifstream& inputFile, vector<TriviaQuestion*> &questions) {
//    
//    // Properties
//    string currentLine;
//    
//    // When reading file use type to get type of question
//    while(getline(inputFile, currentLine)) {
//
//        // Get the data and type of question
//        string type(currentLine, 0, currentLine.find(" "));
//        currentLine.erase(0, type.length() + 1);
//        string data(currentLine, 0, currentLine.length());
//
//        // Create the object for the vector
//        if(type == "FIB") {
//            
//            questions.push_back(new FillInTheBlank(data));
//            
//            
//        } else if(type == "MC3") {
//            
//            questions.push_back(new ThreePartMultipleChoice(data));
//
//        } else if(type == "MC4") {
//            
//            questions.push_back(new FourPartMultipleChoice(data));
//
//        } else if(type == "NUM") {
//            
//            questions.push_back(new NumbericQuestion(data));
//
//        } else if(type == "TOF") {
//            
//            questions.push_back(new TrueOrFalse(data));
//            
//        }
//    }
//    
//    // Shuffle the questions randomly
//    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//    std::default_random_engine random(seed);
//    shuffle(questions.begin(), questions.end(), random);
//    
//}
//
//// This function will dispaly the players info after the game
//void getScore(int correct, int questions, int points) {
//    
//    double per = ((double)correct / questions) * 100.0;
//    string starLine = "***********************************";
//    
//    cout << endl;
//    cout << starLine << endl;
//    cout << "* Score: " << correct << "/" << questions << " \t\t\t\t\t  *" << endl;
//    cout << "* You earned " << points << " points!" << " \t\t\t  *" <<  endl;
//    cout << "* Thats " << fixed << setw(6) << setprecision(2) << per << "%!";
//    cout << right << setw(19) << "*" << endl;
//    cout << starLine << endl;
//    
//}
//
//// Gets the amount of questions the user wants to answer
//int amountOfQuestions() {
//    
//    // Properties
//    int numberOfQuestions;
//    bool flag = false;
//    
//    // Ask the user how many questions they want to answer.
//    do {
//        cout << "How many questions do you want?" << endl;
//        cout << "--> ";
//        cin >> numberOfQuestions;
//        cout << endl;
//        
//        if(cin.fail()) {
//            cout << "Must be a digit." << endl;
//            cin.clear();
//            cin.ignore();
//        } else {
//            flag = true;
//        }
//        
//    } while(!flag);
//    
//    return numberOfQuestions;
//
//}
//
//// This function will attempt to open the file given by the user.
//void openFile(vector<TriviaQuestion*> &questions) {
//    
//    // Properties
//    ifstream inputFile;
//    string fileName;
//    
//    // Get the file name
//    cout << "Please eneter a file to open. " << endl;
//    cout << "--> ";
//    cin >> fileName;
//    cout << endl;
//    
//    if(fileName.find(".txt") == string::npos) {
//        fileName += ".txt";
//    }
//    
//    inputFile.open(fileName);
//    
//    if(inputFile) {
//        
//        getQuestions(inputFile, questions);
//        
//    } else {
//        
//        cout << "File " << fileName << "not found, exiting program now." << endl;
//        
//        // Exit the file
//        exit(1);
//        
//    }
//
//}
//
//// This method gets the number of questions wanted from the
//// user and then asks that many questions.
//void printOutQuestions(vector<TriviaQuestion*> &questions) {
//    
//    // Properties
//    int numberOfQuestions;
//    int points = 0;
//    int totalCorrect = 0;
//    
//    // Get the number of questions
//    numberOfQuestions = amountOfQuestions();
//    
//    for(int i = 0; i < numberOfQuestions; i++) {
//        
//        int pointsEarned = 0;
//        pointsEarned = questions[i]->askQuestion();
//        
//        if(pointsEarned > 0) {
//            points += pointsEarned;
//            totalCorrect++;
//        }
//        
//        cout << endl;
//    }
//    
//    // Get the score for the user
//    getScore(totalCorrect, numberOfQuestions, points);
//    
//}
//
//void openingMessage() {
//    
//    // Properties
//    string starLine = "***********************************";
//    
//    cout << starLine << endl;
//    cout << "* \t\t\t Trivia Game \t\t  *" << endl;
//    cout << starLine << endl << endl;
//    
//}
