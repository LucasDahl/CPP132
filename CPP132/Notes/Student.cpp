//
//  Student.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/11/21.
//

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string fname;
    string lname;
    string ID;
    int quizCount;
    int* quizzes; // Pointer array
    
    double currentGrade;
};

// Prototype
Student getStudent();

int main() {
    
    Student me;
    me = getStudent();
    cout << me.fname << " " << me.lname << " " << me.ID << "." << endl;
    cout << "Your current grade is " << me.currentGrade << "/10" << endl;
    
}

Student getStudent() {
    
    // Properties
    Student x;
    
    // Get info
    cout << "What is the first name? ";
    cin >> x.fname;
    cout << "What is the last name? ";
    cin >> x.lname;
    cout << "What is the Student ID? ";
    cin >> x.ID;
    cout << "How many quizes ";
    cin >> x.quizCount;
    
    // Point to the new array of the correct size.
    x.quizzes = new int(x.quizCount);
    
    // Set all the quizes
    for(int i = 0; i < x.quizCount; i++) {
        
        cout << "Please type in the grade for quiz #" << (i + 1) << " -->";
        cin >> x.quizzes[i];
        
    }
    
    double total = 0;
    for(int i = 0; i < x.quizCount; i++) {
        total = total + x.quizzes[i];
    }
    
    x.currentGrade = total / x.quizCount;
    
    return x;
}
