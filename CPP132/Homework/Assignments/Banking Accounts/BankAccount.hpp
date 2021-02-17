//
//  BankAccount.hpp
//  CPP132
//
// This is the header file for the
// Bank account class that will
// have subclasses for different types
// of bank account.
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
        
        // Abstract
        virtual void withdraw(double) = 0;
        virtual void printStatus() = 0;
        virtual void endOfMonth() = 0;
        virtual void endOfYear() = 0;
    
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
    void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
    
};

class AdvancedSavings : public BankAccount {
    
    private:

    public:
    
        // Constructors
        AdvancedSavings(string, double);
    
        // Methods
        void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
};

class CheckingAccount : public BankAccount {
    
    private:

    public:
    
        // Constructors
        CheckingAccount(string, double);
    
        // Methods
        void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
    
};

class CreditAccount : public BankAccount {
    
    private:

    public:
    
        // Constructors
        CreditAccount(string, double);
    
        // Method
        void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
    
};

#endif /* BankAccount_hpp */
