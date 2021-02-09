//
//  Activity.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/29/21.
//

#include <iostream>
#include "Activity.h"
using namespace std;

//=====================
// MARK: GradedActivity
//=====================

GradedActivity::GradedActivity(double per) {
    if(per > 0) {
        percent = per;
    } else {
        percent = 0;
    }
}

GradedActivity::GradedActivity() {
    percent = 0;
}

void GradedActivity::printMe() {
    cout << "This graded activity has a score of " << getPercent() << "%" << endl;
}

//===========
// MARK: Quiz
//===========

Quiz::Quiz(int s) {
    
    if(s > 0) {
        scoreOutOf10 = s;
    } else {
        scoreOutOf10 = 0;
    }
    
    //Percent is from the parent class
    percent = 100.0 * scoreOutOf10  / 10;
    
}

void Quiz::printMe() {
    cout << "This quiz has a score of " << getPercent() << "%" << endl;
}

//===============
// MARK: Homework
//===============

Homework::Homework() {
    maxScore = 0;
    score = 0;
}

Homework::Homework(int score, int maxScore) {
    
    if(maxScore > 0) {
        this->maxScore = maxScore;
    } else {
        this-> maxScore = 0;
    }
    
    if(score >= 0 && score <= this->maxScore) {
        this->score = score;
    } else {
        this-> score = 0;
    }
    
    // Percent is from the parent class
    percent = 100.0 * score * 1.0 / maxScore;
    
}

void Homework::printMe() {
    cout << "This homework has a score of " << getPercent() << "% or " << score << "/" << maxScore << endl;
}

//==================
// MARK: ExtraCredit
//==================

ExtraCredit::ExtraCredit(int p) {
    extraPoints = p;
    maxScore = 0;
    score = extraPoints;
}

void ExtraCredit::printMe() {
    cout << "This extra credit gives you " << extraPoints << " points." << endl;
}
