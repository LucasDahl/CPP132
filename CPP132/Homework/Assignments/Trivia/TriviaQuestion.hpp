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
        FillInTheBlank(std::string);
        int askQuestion();
    
};

class ThreePartMultipleChoice : public TriviaQuestion {
    
    private:
    
    public:
        ThreePartMultipleChoice();
        ThreePartMultipleChoice(std::string);
        int askQuestion();
    
};

class FourPartMultipleChoice : public TriviaQuestion {
    
    private:
    
    public:
        FourPartMultipleChoice();
        FourPartMultipleChoice(std::string);
        int askQuestion();
};

class TrueOrFalse : public TriviaQuestion {
    
    private:
    
    public:
        TrueOrFalse();
        TrueOrFalse(std::string);
        int askQuestion();
};

class NumbericQuestion : public TriviaQuestion {
    
    private:
        //std::vector<int> possibleAnswers;
    
    public:
        NumbericQuestion();
        NumbericQuestion(std::string);
        int askQuestion();
};


//===================
// MARK: Container
//===================


#endif /* TrivaQuestion_hpp */
