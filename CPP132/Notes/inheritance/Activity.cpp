//
//  Activity.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/29/21.
//

#include <iostream>
#include "Activity.h"


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

Quiz::Quiz(int s) {
    
    if(s > 0) {
        scoreOutOf10 = s;
    } else {
        scoreOutOf10 = 0;
    }
    
    //Percent is from the parent class
    percent = 100.0 * scoreOutOf10  / 10;
    
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
