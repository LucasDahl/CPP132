/* This is the primary initial file for
 * CS 132 Assignment #2.  The purpose of this file
 * is to create a simplistic encryption tool to store and
 * reload user names and passwords.   In doing so
 * the user will use stings and string manipulation.
 *
 * version 2.0
 */

// Lucas Dahl, CS132, Winter 2020, Section XX
// Programming Assignment #2, 1/15/21
//
// This program's behavior is ...

#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;


void addToFile(string fname);
void checkFile(string fname);
bool validatePassword(string);
string charToMorse(char);
void makeTrim(string &);


 int main()
 {
     string userPassword;
     int option;

     cout << "***************************************************************" << endl;
     cout << "Hello and welcome to the CS132 Ultra Secure Password Generator." << endl;
     cout << "***************************************************************" << endl;

     while (true)
     {
        const string fileName = "masterFile.txt";

        do
        {
            cout << "Would you like to test a password, or add a password?" << endl;
            cout << "  1 : for test a password"<< endl;
            cout << "  2 : for add a password" << endl;
            cout << "  3 : to quit" << endl;
            cout << "  >>> ";

            cin >> option;
        } while (option < 1 || option > 3);


        if (option == 1)
        {
            checkFile(fileName);
        }
        else if (option == 2)
        {
            addToFile(fileName);
        }
        else if (option == 3)
        {
            cout << "Thank you, have a good day." << endl;
            return 0;
        }
        else
        {
         // This is an error state, this should never happen.
         cerr << "ERROR invalid option" << endl;
         return 99;

        }

     } // End of the while(true);

    // The program did not leave correctly.
    cerr << "ERROR illegal loop exit." << endl;
    return 100;

 }

// ===============
// MARK: Functions
// ===============

// This method will add a password to the file.
void addToFile(string fname) {
    
    // YOUR CODE GOES HERE;
    // properties
    string password;
    
    
    cout << "Please enter a word or phrase to add to the list of acceptable passwords" << endl;
    getline(cin, password);
    
    
    // Check that the password is valid.
    if(!validatePassword(password)) return;
    
    
    cout << "Temporary message :  Not working yet" << endl;
    return;

}

void checkFile(string fname) {
    //YOUR CODE GOES HERE;
    
    // properties
    string password;
    
    cout << "Please enter a password." << endl;
    cin >> password;
    
    
    
    cout << "Temporary message :  Not working yet" << endl;
    return;
}

// Checks if the password is valid or not.
bool validatePassword(string password) {
    
    // Properties
    string validSymbols = ".,?";
    int letters = 0;
    int nums = 0;
    int symbols = 0;
    
    // Get the total number of letters, numbers, and symbols.
    for(int i = 0; i < password.length(); i++) {
        
        char currentChar = password.at(i);
        
        if(isdigit(currentChar)) {
            nums++;
        } else if(isalpha(currentChar)) {
            letters++;
        } else if(validSymbols.find(1, currentChar) || isspace(currentChar)) {
            symbols++;
        }
    
    }
    
    if(password.length() < 10) return false; // Word is at least 10 characters.
    if(letters < 8) return false; // Word contains at least 8 letters.
    if(nums < 4) return false; // Word contains at least 4 numbers.
    if(symbols < 1) return false; // Word contains at least 1 symbol.
    
    // The word is a valid password.
    return true;
    
}

// This method will change each char to its morse code equivalent.
string charToMorse(char character) {
    
    // Proeprties
    string morse;
    
    return morse;
    
}

// Trims while reading from a file.
void makeTrim(string &x) {
    const char* ws = " \t\n\r\f\v"; //List of space Characters x.erase(0,
    x.find_first_not_of(ws); //prefixing spaces
    x.erase(x.find_last_not_of(ws)+1); //surfixing spaces
}
