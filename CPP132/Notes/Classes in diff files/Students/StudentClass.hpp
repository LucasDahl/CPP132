//
//  StudentClass.hpp
//  CPP132
//
//  Created by Lucas Dahl on 1/15/21.
//

#ifndef StudentClass_hpp
#define StudentClass_hpp

#include <iostream>
#include <string>

using namespace std;

struct Address {
  
    // Fields
    string street;
    string state;
    int zip;
    
};


class Student {
    
    private:
        string name;
        string ID;
        Address home;
    
        int* quizList;
        int numQuiz;
    
    public:
    
        // Constructors - needs a default constructor to make an array of empty Students.
        Student(); // Constructor (default)
        Student(string, string = "00000"); // Two part constructor with default values.
        Student(string, string, Address);

        // Destructors - must have ~, only called when the object is about to go away. Never have to run it, just prep it.
        ~Student();
    
        void setAddress(const Address&);
        void setName(string);
        void setID(string);
    
        string getName() { return name;} // example of an Inline method - dont use inline methods, unless its one line in this class
    
        void printStudent();
    
        void addQuiz(int);
        double getAverage();
    
};


#endif /* StudentClass_hpp */
