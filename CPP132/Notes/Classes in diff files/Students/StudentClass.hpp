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
        int numQuiz = 0;
    
    public:
        void setAddress(const Address&);
        void setName(string);
        void setID(string);
    
        void printStudent();
        void addQuiz(int);
        double getAverage();
    
};


#endif /* StudentClass_hpp */
