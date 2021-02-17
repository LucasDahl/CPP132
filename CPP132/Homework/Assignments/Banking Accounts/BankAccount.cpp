//
//  BankAccount.cpp
//  CPP132
//
// This file contains all the methods
// for the BankAccount and its subclasses.
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

// MARK: REMOVE

//void BankAccount::endOfMonth() {
//
//}
//
//void BankAccount::endOfYear() {
//
//}
//
//void BankAccount::printStatus() {
//
//}

// MARK: END REMOVE

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
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

void SimpleSavings::printStatus() {
    cout << "Simple Account #" << ID << " has $" << balance << endl;
}

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

AdvancedSavings::AdvancedSavings(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

void AdvancedSavings::printStatus() {
    cout << "Advance Account #" << ID << " has $" << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

void AdvancedSavings::withdraw(double withdrawal) {
    
    // Properties
    int withdrawalFee;
    
    // check the number of withdrawals
    if(totalWithdrawals == 0) {
        withdrawalFee = 0;
    } else {
        withdrawalFee = totalWithdrawals * 1;
    }
    
    // Deduct from the balance
    balance -= (withdrawal + withdrawalFee);
    
    // Increment the totalWithdrawals
    totalWithdrawals++;
    
}

void AdvancedSavings::endOfMonth() {
    
    // Check the balance to see
    // if its over 10,000 for 2% intrest
    if(balance > 10000.0) {
        balance *= 1.02;
    } else {
        balance *= 1.01;
    }
    
}
void AdvancedSavings::endOfYear() {
    
    // Deduct the annual fee
    // $15 if there is no withdrawals,
    // otherwise there is $100.
    if(totalWithdrawals == 0) {
        balance -= 15.0;
    } else {
        balance -= 100.0;
    }
    
    // Resest the withdrawals and deposits
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// End AdvancedSavings===============================

//======================
// MARK: CheckingAccount
//======================

// Constructors

CheckingAccount::CheckingAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

void CheckingAccount::printStatus() {
    cout << "Checking Account #" << ID << " has $" << balance << " with ";
    cout << totalWithdrawals << " withdrawls this year." << endl;
}

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

void CheckingAccount::endOfMonth() {
    // dont't need?
}

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

CreditAccount::CreditAccount(string accountID, double startBalance) {
    
    ID = accountID;
    balance = startBalance;
    totalDeposits = 0;
    totalWithdrawals = 0;
    
}

// Methods

void CreditAccount::printStatus() {
    cout << "Credit Account #" << ID << " owes $" << balance << endl;
    cout << "Credit Account #" << ID << " owes $" << balance << " and is late " << endl;
    cout << "Credit Account #" << ID << " owes $" << balance << " and is currently closed. " << endl;
    cout << "Credit Account #" << ID << " is overpaid by $" << balance << endl;
}

void CreditAccount::withdraw(double withdrawal) {
    
}

void CreditAccount::endOfMonth() {
    
}

void CreditAccount::endOfYear() {
    
}

// End CreditAccount===============================


