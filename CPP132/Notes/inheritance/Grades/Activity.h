//
//  Activity.h
//  CPP132
//
//  Created by Lucas Dahl on 1/29/21.
//

#ifndef Activity_h
#define Activity_h

// Polymorphism doesnt work without pointers

class GradedActivity {
  
    private:
        
    
    public:
        double getPercent() { return percent; }
    
        GradedActivity(double);
        GradedActivity();
    
        virtual void printMe(); // putting virtual(must be apointer) will allow for the sub classes to use their override methods
    
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
        void printMe(); // updated/improved version of printMe() method that was inherated
    
};

class Homework: public GradedActivity {

    protected:
        int maxScore;
        int score;
    
    public:
    Homework();
        Homework(int, int);
        void printMe(); // updated/improved version of printMe() method that was inherated
};


class ExtraCredit : public Homework {
  
    private:
    int extraPoints;
    
    public:
        ~ExtraCredit() {}
        ExtraCredit(int);
        void printMe();
    
    
};

#endif /* Activity_h */
