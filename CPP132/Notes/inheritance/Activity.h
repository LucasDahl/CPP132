//
//  Activity.h
//  CPP132
//
//  Created by Lucas Dahl on 1/29/21.
//

#ifndef Activity_h
#define Activity_h

class GradedActivity {
  
    private:
        
    
    public:
        double getPercent() { return percent; }
    
        GradedActivity(double);
        GradedActivity();
    
    protected: // Private to the outside world. But maybe visable to teh childeren
        double percent;
    
};

// Subclass of GradedActivity
// All quizzes are out of 10 points as an integer
// Can have private inheritance(most likely wont use it)
class Quiz: public GradedActivity {
    
    private:
        int scoreOutOf10;
    
    public:
        Quiz(int);
        // Has double getPercent() - From parentClass
    
};

class Homework: public GradedActivity {

    private:
        int maxScore;
        int score;
    
    public:
        Homework(int, int);
};

#endif /* Activity_h */
