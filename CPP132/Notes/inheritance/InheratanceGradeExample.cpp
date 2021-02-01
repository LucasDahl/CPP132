//
//  InheratanceGradeExample.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/29/21.
//

#include <iostream>
#include "Activity.h"
#include <vector>

using namespace std;

int main() {
    
    GradedActivity a1(75);
    GradedActivity a2(50);
    
    Quiz q1(4);
    Homework h1(5, 8);
  
    vector<GradedActivity*> myScores;
    
    myScores.push_back(new GradedActivity(88));
    myScores.push_back(new GradedActivity(32));
    myScores.push_back(new Quiz(7));
    myScores.push_back(new Homework(7,12));
    myScores.push_back(new Homework(8,31));
    myScores.push_back(new Quiz(8));
    myScores.push_back(new ExtraCredit(77));
    
    for(int i = 0; i < myScores.size(); ++i) {
        myScores[i]->printMe();
    }
    
    // clean up
    for(int i = 0; i < myScores.size(); ++i) {
        delete myScores[i];
    }
    
}
