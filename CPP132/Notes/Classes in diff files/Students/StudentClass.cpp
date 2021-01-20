//
//  StudentClass.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/15/21.
//

#include "StudentClass.hpp"

void Student::setAddress(const Address &z) {
    
    home.street = z.street;
    home.state = z.state;
    home.zip = z.zip;
    
}
void Student::setName(string x) {
    
    if(x.length() > 1) {
        
        name = x;
        
    } else {
        name = "Unknown";
    }
    
    
}
void Student::setID(string x) {
    
    if(x.length() > 1) {
        ID = x;
    } else {
        ID = "Unknown";
    }
    
}

void Student::addQuiz(int newQuiz) {
    
    if(numQuiz == 0) {
        
        quizList = new int[1];
        quizList[0] = newQuiz;
        numQuiz = 1;
        
    } else { // number of quizes is one or bigger
        
        int* newArray = new int[numQuiz + 1]; // Make a new array one size bigger
        
        for(int i = 0; i < numQuiz + 1; i++) { // Copy all the data from the old array into the temp array
            newArray[i] = quizList[i];
        }
        
        newArray[numQuiz] = newQuiz; // Make the new quiz the last element in the array

        // Delete the old array before setting resetting it.
        delete [] quizList;
        
        quizList = newArray; // Make the array take the place of the temp array
        
        numQuiz++; // Increase the number of quizes
        
    }
    
}
double Student::getAverage() {
    
    if(numQuiz == 0) return -1;
    
    double total = 0;
    
    // Now we can assume there is atleast one quiz grade;
    for(int i = 0; i < numQuiz; i++) {
        
        total += quizList[i];
        
    }
    return total / numQuiz;
}


void Student::printStudent() {
    
    cout << "Student Name  : " << name << endl;
    cout << "Student ID    : " << ID << endl;
    cout << "Lives at      : " << home.street << " " << home.state << " " << home.zip << endl;
    
    if(numQuiz > 0) {
        
        cout << "Current Grade : " << getAverage() << endl;
        cout << "Quiz scores   : ";
        
        for(int i = 0; i < numQuiz; i++) {
            
            cout << quizList[i] << " ";
            
        }
        
        cout << endl;
        
    } else {
        
        cout << "Nothing gradded yet.";
        
    }
    
    cout << endl;
    
}

// MARK: Constructor

Student::Student() {
    name = "?";
    ID = "0";
    home.state = "";
    home.street = "";
    home.zip = 0;
    
    numQuiz = 0;
}

Student::Student(string n, string i) {
    
    setName(n);
    setID(i);
    home.state = "";
    home.street = "";
    home.zip = 0;
    
    numQuiz = 0;
    
}

Student::Student(string n, string i, Address x) {
    
    setName(n);
    setID(i);
    
    home = x;
    
    numQuiz = 0;
    
}

// 99% of the time its blank
Student::~Student() {
    // Right at the end, delete the quizList array before we go away.
    delete[] quizList; // Since we wrote new in the code.
    
    cout << name << " was deleted." << endl; // Dont normally do, but can be used for debugging.
    
}
