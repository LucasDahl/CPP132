//
//  BankAccount.hpp
//  CPP132
//
//  Created by Lucas Dahl on 2/17/21.
//

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    
    private:
        
    protected:
    
        // Fields
        double balance;
        int totalDeposits;
        int totalWithdrawals;
        string ID;
        
    public:
    
        // Constructors
        BankAccount();
        BankAccount(string, double);
    
        // Methods
        string getID();
        void deposit(double);
        void withdraw(double);
        void endOfMonth();
        void endOfYear();
        virtual void printStatus();
    
        // Overload
        bool operator < (const BankAccount&);
    
    
};

// Subclasses

class SimpleSavings : public BankAccount {
    
    private:
    
    public:
    
        // Constructors
        SimpleSavings(string, double);
    
        // Methods
        void printStatus();
    
};

class AdvancedSavings : public BankAccount {
    
    private:

    public:
    
        // Constructors
        AdvancedSavings(string, double);
    
        // Methods
        void printStatus();
};

class CheckingAccount : public BankAccount {
    
    private:

    public:
    
        // Constructors
        CheckingAccount(string, double);
    
        // Methods
        void printStatus();
};

class CreditAccount : public BankAccount {
    
    private:

    public:
    
        // Constructors
        CreditAccount(string, double);
    
        // Method
        void printStatus();
};

#endif /* BankAccount_hpp */
