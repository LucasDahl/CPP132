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
        
        int* temp = new int[numQuiz + 1]; // Make a new array one size bigger
        
        for(int i = 0; i < numQuiz + 1; i++) { // Copy all the data from the old array into the temp array
            temp[i] = quizList[i];
        }
        
        temp[numQuiz] = newQuiz; // Make the new quiz the last element in the array
        
        quizList = temp; // Make the array take the place of the temp array
        
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
