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
#include <vector>
#include <utility>

class TriviaQuestion {
  
    protected:
        int points;
        std::string data;
        std::string question;
        std::string answer;
        std::vector<std::string> choices;
    
    protected:
        virtual void setData(std::string);
        virtual void setChoices(std::string);
        int makeRandomNumber(int = 1, int = 100);
        
    public:
        TriviaQuestion();
        int getMax();
        virtual int askQuestion() = 0;
    
};

//====================
// MARK: Subclasses
//====================

class FillInTheBlank : public TriviaQuestion {
 
    public:
        FillInTheBlank(std::string);
        int askQuestion();
    
};

class ThreePartMultipleChoice : public TriviaQuestion {
   
    public:
        ThreePartMultipleChoice(std::string);
        int askQuestion();
    
};

class FourPartMultipleChoice : public TriviaQuestion {
 
    public:
        FourPartMultipleChoice(std::string);
        int askQuestion();
};

class TrueOrFalse : public TriviaQuestion {

    public:
        TrueOrFalse(std::string);
        int askQuestion();
};

class NumbericQuestion : public TriviaQuestion {
    
    public:
        NumbericQuestion(std::string);
        int askQuestion();
};

#endif /* TrivaQuestion_hpp */
