//
//  BankAccount.cpp
//  CPP132
//
// This file contains all the methods
// for the BankAccount and its subclasses.
//
//
//  Created by Lucas Dahl on 2/17/21 CS132, Winter 2021.
// Programming Assignment Bank Accounts

#include "BankAccount.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//==================
// MARK: BankAccount
//==================

// Constructors

// This is the default constructor.
BankAccount::BankAccount() {
    
    ID = "Unknown";
    balance = 0.0;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// This constructor will set the ID and startBalance
// It will set all other values to zero
BankAccount::BankAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

// This method returns the account ID.
string BankAccount::getID() { return ID;}

// This method will addd the desposited money
// to the balance.
void BankAccount::deposit(double deposit) {
    
    // Add to the balance
    balance += deposit;
    
    // Increse number of deposits
    totalDeposits++;
    
}

// This method will take away money from the
// balance.
void BankAccount::withdraw(double withdrawl) {
    
    // Balance is neagtive
    if(balance < 0) {
        cout << "The balance is negative, cannot withdraw." << endl;
        return;
    }
    
    // Take away from the balance
    balance -= withdrawl;
    
    // Increse number of withdrawls
    totalWithdrawals++;
    
}

// This method will return true if the
// lhs is less than the rhs.
bool BankAccount::operator < (const BankAccount &rhs) {
    
    if(ID < rhs.ID) {
        return true;
    }
    
    return false;
    
}

// This method is required by some subclasses,
// but no all.
void BankAccount::endOfMonth() {}

// End BanckAccount===============================


//=======================
// MARK: SimpleSavings
//=======================

// Constructors

// This constructor will set the ID and startBalance
// It will set all other values to zero
SimpleSavings::SimpleSavings(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

// This method will print the account infromation.
void SimpleSavings::printStatus() {
    cout << "Simple Account #" << ID << " has $" << setprecision (2) << fixed << balance << endl;
}

// This method will subtract from the balance
// if there is money in the account.
void SimpleSavings::withdraw(double withdrawal) {
    
    // Check if there is enough money in the
    // balance to withdraw.
    if((balance - withdrawal) != 0) {
        
        // Subtract the withdrawal
        balance -= withdrawal;
        
        // Increment the withdrawals
        totalWithdrawals++;
        
    }
    
}

// Each month the balance gains 0.5% intrest
void SimpleSavings::endOfMonth() {
    balance *= 1.05;
}

// This method sets the total deposits to zero and
// subtracts the fee
void SimpleSavings::endOfYear() {
    
    // Resest the withdrawals and deposits
    totalDeposits = 0;
    totalWithdrawals = 0;
    
    // Take out the fee
    balance -= 5.0;
    
}

// End SimpleSavings===============================


//======================
// MARK: AdvancedSavings
//======================

// Constructors

// This is the default constructor
AdvancedSavings::AdvancedSavings() {
    ID = "Unknown";
    balance = 0;
    totalDeposits = 0;
    totalWithdrawals = 0;
    withdrawalFee = 0;
}

// This constructor will set the ID and startBalance
// It will set all other values to zero
AdvancedSavings::AdvancedSavings(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    withdrawalFee = 0;
    
}

// Methods

// This method will print the account infromation.
void AdvancedSavings::printStatus() {
    cout << "Advance Account #" << ID << " has $" << setprecision (2) << fixed << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

// This method will withdaraw money from the
// balance. It will also add a dolar fee
// for every withdrawal except the first.
void AdvancedSavings::withdraw(double withdrawal) {

    // check the number of withdrawals
    // Add a dolar for everyone after the first one.
    if (totalWithdrawals > 0) {
        withdrawalFee++;
    }
    
    // Deduct from the balance
    balance -= withdrawal;
    
    // Increment the totalWithdrawals
    totalWithdrawals++;
    
}

// This method will add the intrest per
// month based off the balance of the account.
void AdvancedSavings::endOfMonth() {
    
    // Check the balance to see
    // if its over 10,000 for 2% intrest
    if(balance > 10000.0) {
        balance *= 1.02;
    } else {
        balance *= 1.01;
    }
    
}

// This method will subtract all the yearly fees
// from the account.
void AdvancedSavings::endOfYear() {
    
    // Deduct the annual fee
    // $15 if there is no withdrawals,
    // otherwise there is $100.
    if(totalWithdrawals == 0) {
        balance -= 15.0;
    } else {
        balance -= 100.0;
    }
    
    // Subtract teh withdrawal fee
    balance -= withdrawalFee;
    
    // Resest the withdrawals and deposits
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// End AdvancedSavings===============================

//======================
// MARK: CheckingAccount
//======================

// Constructors

// This constructor will set the ID and startBalance
// It will set all other values to zero
CheckingAccount::CheckingAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

// This method will print the account infromation.
void CheckingAccount::printStatus() {
    cout << "Checking Account #" << ID << " has $" << setprecision (2) << fixed << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

// This method will subtract the withdrawal from the
// balance, but if the balance goes negative an additional
// $15 is taken from the account.
void CheckingAccount::withdraw(double withdrawal) {
    
    // Check if there is enough money in the
    // balance to withdraw.
    if((balance - withdrawal) != 0) {
        
        // Subtract the withdrawal
        balance -= withdrawal;
        
        // Increment the withdrawals
        totalWithdrawals++;
        
    } else if((balance - withdrawal) <= 0) {
        
        // Subtract the withdrawal
        balance -= withdrawal;
        
        // Penalty for going over
        balance -= 15.0;
        
        // Increment the withdrawals
        totalWithdrawals++;
    }
    
}

// This method will add the yearly intrest and
// subtract a fee based off the amount of
// withdrawals.
void CheckingAccount::endOfYear() {
    
    // Add the fee of $5.00 + $0.10 * totalWithdrawals
    balance -= (5.0 + (0.10 * totalWithdrawals));
    
    // If the balance is neagtive after adding the fees
    // an additional 10% is added.
    if(balance < 0) {
        balance *= 1.10;
    }
    
}

// End CheckingAccount===============================

//====================
// MARK: CreditAccount
//====================

// Constructors

// This is the default constructor.
CreditAccount::CreditAccount() {
    ID = "unknown";
    balance = 0;
    totalDeposits = 0;
    totalWithdrawals = 0;
    lateMonths = 0;
    closed = false;
}

// This constructor will set the ID and startBalance
// It will set all other values to zero
CreditAccount::CreditAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    lateMonths = 0;
    closed = false;
    
}

// Methods

// This method will print the account infromation.
void CreditAccount::printStatus() {
    cout << "Credit Account #" << ID << " owes $" << setprecision (2) << fixed << balance << endl;
    cout << "Credit Account #" << ID << " owes $" << setprecision (2) << fixed << balance << " and is late (month #" << lateMonths << ")" << endl;
    cout << "Credit Account #" << ID << " owes $" << setprecision (2) << fixed << balance;
    
    if(closed) {
        cout << " and is currently closed. " << endl;
    } else {
        cout << " and is currently open. " << endl;
    }
    
    if(balance > 0) {
        cout << "Credit Account #" << ID << " is overpaid by $" << setprecision (2) << fixed << balance << endl;
    } else {
        cout << "Credit Account #" << ID << " owes $" << setprecision (2) << fixed << balance << endl;
    }
    
}

// This method will deposit money as
// long as the balance is negative
void CreditAccount::deposit(double deposit) {
    
    if(balance < 0) {
        balance += deposit;
    } else if(balance > 0) {
        cout << "Your account is paid of with a credit of " << balance << "." << endl;
    } else {
        cout << "your account is paid off." << endl;
    }
    
    // Add to total deposit to see if the
    // month will be late or not.
    totalDeposits += deposit;
    
}

// This method will withdraw from the account
// as long as the account is not open.
void CreditAccount::withdraw(double withdrawal) {
    
    if(closed) {
        balance -= withdrawal;
    } else {
        cout << "Your account is closed." << endl;
    }
    
}

// This method will add 5% if there
// any remaining value and decide if the
// month was late.
void CreditAccount::endOfMonth() {
    
    // Check if the month is considered late
    if(totalDeposits < 100) {
        lateMonths++;
    }
    
    // Add the intrest
    if(balance < 0) {
        balance += 1.05;
    }
}

// This method will take out any yearly fees.
// It will also reset fields that track
// values like deposts and withdrawals
void CreditAccount::endOfYear() {
    
    // Subtract the annual fee.
    balance -= 25.0;
    
    // Check if you the account should be closed.
    if(lateMonths >= 4) {
        closed = true;
    }
    
    // Set the values to zero
    totalWithdrawals = 0;
    totalDeposits = 0;
    lateMonths = 0;
    
}

// End CreditAccount===============================
