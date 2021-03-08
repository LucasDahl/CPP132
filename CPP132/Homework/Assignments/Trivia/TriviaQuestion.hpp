//
//  TriviaQuestion.hpp
//  CPP132
//
// This is the header file for the TrivaQuestion
// Class that has all the prototype methods and fields.
//
//  Created by Lucas Dahl on 3/8/21.
//

#ifndef TrivaQuestion_hpp
#define TrivaQuestion_hpp

#include <iostream>
#include <string>

using namespace std;

class TriviaQuestion {
  
    protected:
        int questionPoints;
        int points;
        string questions;
        
    public:
        TriviaQuestion();
        int getMax();
        virtual int askQuestion() = 0;
    
    
};

//====================
// MARK: Subclasses
//====================

class FillInTheBlank : public TriviaQuestion {
    
    private:
    public:
        FillInTheBlank();
        int askQuestion();
    
};

class ThreePartMultipleChoice : public TriviaQuestion {
    private:
    public:
        ThreePartMultipleChoice();
        int askQuestion();
    
};

class FourPartMultipleChoice : public TriviaQuestion {
    private:
    public:
        FourPartMultipleChoice();
        int askQuestion();
};

class TrueOrFalse : public TriviaQuestion {
    private:
    public:
        TrueOrFalse();
        int askQuestion();
};

class NumbericQuestion : public TriviaQuestion {
    private:
    public:
        NumbericQuestion();
        int askQuestion();
};

#endif /* TrivaQuestion_hpp */
