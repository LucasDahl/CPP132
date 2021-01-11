//
//  AssignmentOne.cpp
//  CPP132
//
// This program is a refresher, that will print some
// basic info and read from a text file.
//
//  Created by Lucas Dahl on 1/7/21.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Prototype functions
void printStars();
int userNumber();
int getTotalWords(int, string);
void writeFile(string, int, int, string[]);
void findLongestWord(string);
void basicInfo();


// This is the main method. 
int main() {
    
    // Properties
    int userNum, totalWords = 0;
    ifstream inputFile;
    string currentLine, longestWord, *wordList, fileName = "WordList.txt";
    
    // Call each method to get and print some basic info.
    basicInfo();
    printStars();
    userNum = userNumber(); // Get the user number.
    printStars();
    totalWords = getTotalWords(userNum, fileName); // Get the total number of words.
    printStars();
    wordList = new string[totalWords]; // Create an array.
    writeFile(fileName, totalWords, userNum, wordList); // Make the array and write to the file.
    printStars();
    findLongestWord(fileName);
    
    // Delete the list.
    delete [] wordList;
    
}

// This method prints basic info
void basicInfo() {
    
    cout << "Formal Name: Lucas Dahl" << endl; // Formal name.
    cout << "Preferred Name: Lucas Dahl" << endl; // Preferred name.
    cout << "I would like to learn more about heaps." << endl; // What I would like to learn.
    
}

// A method that prints stars
void printStars() {
    
    for(int i = 0; i < 50; i++) {
        cout << "*";
    }
    
    cout << endl;
}

// This method asks the user for a number.
int userNumber() {
    
    // Properties
    bool flag = true;
    int num;
    
    do {
        
        cout << "What size do you want? "; // Ask for a number
        cin >> num; // assign the number.
        
        if(num < 1 || num > 30) {
            cout << "Number must be bewtween 1 and 30." << endl;
        } else {
            flag = false;
        }
        
    } while(flag);
    
    // Return the number
    return num;
    
}

// HTis method gets the total number of words.
int getTotalWords(int wrdLength, string fileName) {
    
    // Properties
    ifstream inputFile;
    int totalWords = 0;
    string currentLine;
    
    inputFile.open(fileName); // open the file.
    
    if(inputFile) {
        
        while(getline(inputFile, currentLine)) {
            
            if(currentLine.length() == wrdLength) {
                totalWords++;
            }
            
        }
        
    } else {
        
        cout << "Could not open the file.." << endl;
        
    }
    
    inputFile.close(); // Close the file.
    
    cout << "There are " << totalWords << " of length " << wrdLength << "." << endl;
    
    return totalWords;
    
}

// This method wrotes to a file.
void writeFile(string fileName, int totalWords, int userNum, string wordList[]) {
    
    // Proeprties
    ifstream inputFile;
    ofstream outputFile("WordFile2.txt"); // The new Word file.
    int index = 0;
    string currentLine;
    
    inputFile.open(fileName); // reopen the file.
    
    if(inputFile) {
        
        while(getline(inputFile, currentLine)) {
            
            if(currentLine.length() == userNum) {
                wordList[index] = currentLine;
                index++;
            }
            
        }
        
    } else {
        
        cout << "Could not open the file.." << endl;
        
    }
    
    
    for(int i = 1; i < totalWords; i++) {
        cout << wordList[totalWords - i] << endl; // Print each word to the screen.
        outputFile << wordList[totalWords - i] << endl; // Write to the file backwards.
    }
    
    // Close both files.
    inputFile.close();
    outputFile.close();
    
}

// This method finds the longest word.
void findLongestWord(string fileName) {
    
    ifstream inputFile;
    string currentLine, longestWord;
    
    inputFile.open(fileName); // reopen the file.
    
    // Find the longest word.
    if(inputFile) {
        
        while(getline(inputFile, currentLine)) {
            
            if(currentLine.length() > longestWord.length()) {
                longestWord = currentLine;
            }
            
        }
        
    } else {
        
        cout << "Could not open the file.." << endl;
        
    }
    
    cout << "The longest word is: " << longestWord << endl; // Print out the longest word.
    
    // Close the file.
    inputFile.close();
    
    
}
