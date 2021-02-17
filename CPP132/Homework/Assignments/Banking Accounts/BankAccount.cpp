//
//  BankAccount.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/17/21.
//

#include "BankAccount.hpp"
#include <iostream>
#include <string>

using namespace std;

//==================
// MARK: BankAccount
//==================

// Constructors
BankAccount::BankAccount() {
    
    ID = "Unknown";
    balance = 0.0;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}
BankAccount::BankAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

string BankAccount::getID() { return ID;}

void BankAccount::deposit(double deposit) {
    
    // Do error checking for negative
    // Add to the balance
    balance += deposit;
    
    // Increse number of deposits
    totalDeposits++;
    
}

void BankAccount::withdraw(double withdrawl) {
    
    // Do error checking for negative
    // Take away from the balance
    balance -= withdrawl;
    
    // Increse number of withdrawls
    totalWithdrawals++;
    
}

void BankAccount::endOfMonth() {
    
}

void BankAccount::endOfYear() {
    
}

void BankAccount::printStatus() {
    
}

// Overload
bool BankAccount::operator < (const BankAccount&) {
    return true;
}

// End BanckAccount===============================


//====================
// MARK: SimpleSavings
//====================

// Constructors

SimpleSavings::SimpleSavings(string accountID, double startBalance) {
    
}

// Methods

void SimpleSavings::printStatus() {
    cout << "Simple Account #" << ID << " has $" << balance << endl;
}

// End SimpleSavings===============================


//======================
// MARK: AdvancedSavings
//======================

// Constructors

AdvancedSavings::AdvancedSavings(string accountID, double startBalance) {
    
}

// Methods

void AdvancedSavings::printStatus() {
    cout << "Advance Account #" << ID << " has $" << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

// End AdvancedSavings===============================

//======================
// MARK: CheckingAccount
//======================

// Constructors

CheckingAccount::CheckingAccount(string accountID, double startBalance) {
    
}

// Methods

void CheckingAccount::printStatus() {
    cout << "Checking Account #" << ID << " has $" << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

// End CheckingAccount===============================

//====================
// MARK: CreditAccount
//====================

// Constructors

CreditAccount::CreditAccount(string accountID, double startBalance) {
    
}

// Methods

void CreditAccount::printStatus() {
    cout << "Credit Account #" << ID << " owes $" << balance << endl;
    cout << "Credit Account #" << ID << " owes $" << balance << " and is late " << endl;
    cout << "Credit Account #" << ID << " owes $" << balance << " and is currently closed. " << endl;
    cout << "Credit Account #" << ID << " is overpaid by $" << balance << endl;
}

// End CreditAccount===============================


