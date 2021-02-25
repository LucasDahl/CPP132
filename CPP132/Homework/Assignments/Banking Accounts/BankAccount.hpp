//
//  BankAccount.hpp
//  CPP132
//
// This is the header file for the
// Bank account class that will
// have subclasses four different types
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
        virtual void deposit(double);
        virtual void endOfMonth();
        
        // Abstract
        virtual void withdraw(double) = 0;
        virtual void printStatus() = 0;
        virtual void endOfYear() = 0;
    
        // Overload
        bool operator < (const BankAccount&);
    
};

// MARK: Subclasses

class SimpleSavings : public BankAccount {

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
        int withdrawalFee;
    
    public:
    
        // Constructors
        AdvancedSavings();
        AdvancedSavings(string, double);
    
        // Methods
        void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
    
};

class CheckingAccount : public BankAccount {
    
    public:
    
        // Constructors
        CheckingAccount(string, double);
    
        // Methods
        void withdraw(double);
        void printStatus();
        void endOfYear();
    
};

class CreditAccount : public BankAccount {
    
    private:
        int lateMonths;
        int totalMonthlyDeposited;
        bool closed;

    public:
    
        // Constructors
        CreditAccount();
        CreditAccount(string, double);
    
        // Method
        void deposit(double);
        void withdraw(double);
        void printStatus();
        void endOfMonth();
        void endOfYear();
    
};

#endif /* BankAccount_hpp */
