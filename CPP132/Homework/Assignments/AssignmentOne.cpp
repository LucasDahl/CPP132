//
//  AssignmentOne.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/7/21.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    
    // Properties
    int userNum, totalWords = 0, index = 0;
    ifstream inputFile;
    ofstream outputFile("WordFile2.txt"); // The new Word file.
    string currentLine, longestWord, *wordList, fileName = "WordList.txt";
    bool flag = true;

    cout << "Formal Name: Lucas Dahl" << endl; // Formal name.
    cout << "Preferred Name: Lucas Dahl" << endl; // Preferred name.
    
    do {
        
        cout << "What size do you want? "; // Ask for a number
        cin >> userNum; // assign the number.
        
        if(userNum < 1 || userNum > 30) {
            cout << "Number must be bewtween 1 and 30." << endl;
        } else {
            flag = false;
        }
        
    } while(flag);
    
    inputFile.open(fileName); // open the file.
    
    if(inputFile) {
        
        while(getline(inputFile, currentLine)) {
            
            if(currentLine.length() == userNum) {
                totalWords++;
            }
            
        }
        
    } else {
        
        cout << "Could not open the file.." << endl;
        
    }
    
    inputFile.close(); // Close the file.
    
    wordList = new string[totalWords]; // Create an array.
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
        cout << wordList[i - 1] << endl; // Print each word to the screen.
        outputFile << wordList[totalWords - i] << endl; // Write to the file backwards.
    }
    
    // Close both files.
    inputFile.close();
    outputFile.close();
    
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
    
    // Close the file and delete the list.
    inputFile.close();
    delete [] wordList;

}
