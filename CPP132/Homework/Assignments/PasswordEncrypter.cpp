/* This is the primary initial file for
 * CS 132 Assignment #2.  The purpose of this file
 * is to create a simplistic encryption tool to store and
 * reload user names and passwords.   In doing so
 * the user will use stings and string manipulation.
 *
 * version 2.0
 */

// Lucas Dahl, CS132, Winter 2020, Section A
// Programming Assignment #2, 1/15/21
//
// This program's will take user input and
// check if its a valid password or not. This
// program will also allow the user to check if a
// password is matches any inside the master file.

//#include <string>
//#include <cstdlib>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Prototype functions
//void addToFile(string fname);
//void checkFile(string fname);
//bool validatePassword(string);
//string charToMorse(char);
//void makeTrim(string &);
//string morseString(string);
//string getPassword(string);
//
//
//// The main method
// int main()
// {
//     
//     // Properties
//     string userPassword;
//     int option;
//
//     cout << "***************************************************************" << endl;
//     cout << "Hello and welcome to the CS132 Ultra Secure Password Generator." << endl;
//     cout << "***************************************************************" << endl;
//     
//     // This validation loop will fall into one of three options
//     // based on user input, and in an error if the user types
//     // in anything other than 1 - 3.
//     while (true)
//     {
//        // This is the file that contains the valid passwords
//         // it is also the file that new valid passwords will be added.
//        const string fileName = "masterFile.txt";
//
//        do
//        {
//            // The list of options
//            cout << "Would you like to test a password, or add a password?" << endl;
//            cout << "  1 : for test a password"<< endl;
//            cout << "  2 : for add a password" << endl;
//            cout << "  3 : to quit" << endl;
//            cout << "  >>> ";
//
//            cin >> option;
//        } while (option < 1 || option > 3);
//
//
//         // This is the decision tree to determine
//         // which method to call.
//        if (option == 1)
//        {
//            // This will call the checkFile method to check a password.
//            checkFile(fileName);
//        }
//        else if (option == 2)
//        {
//            // This will call the addToFile method to add a file.
//            addToFile(fileName);
//        }
//        else if (option == 3)
//        {
//            // User picked something other than 1 - 3.
//            cout << "Thank you, have a good day." << endl;
//            return 0;
//        }
//        else
//        {
//         // This is an error state, this should never happen.
//         cerr << "ERROR invalid option" << endl;
//         return 99;
//
//        }
//
//     } // End of the while(true);
//
//    // The program did not leave correctly.
//    cerr << "ERROR illegal loop exit." << endl;
//    return 100;
//
// }
//
//// ===============
//// MARK: Functions
//// ===============
//
//// This method will add a password to the file
//// if its valid.
//void addToFile(string fname) {
//
//    // YOUR CODE GOES HERE;
//    // properties
//    string password;
//    string morse;
//    ofstream file;
//
//    // Append to the file on a new line.
//    file.open(fname, std::ios_base::app);
//
//
//    password = getPassword("Please enter a word or phrase to add to the list of acceptable passwords: ");
//    
//    // Check that the password is valid.
//    if(!validatePassword(password)) {
//        cout << "Word/Phrase does not follow the rules.." << endl << endl;
//        return;
//    }
//
//
//    // Encode the password.
//    morse = morseString(password);
//
//    // Write to the file, since the password is valid.
//    file << morse << endl;
//    file.close();
//
//
////    cout << "Temporary message :  Not working yet" << endl;
//    return;
//
//}
//
//// This function will check if a password is contained in the file.
//void checkFile(string fname) {
//    //YOUR CODE GOES HERE;
//
//    // properties
//    string password;
//    string morse;
//    ifstream file;
//    
//    cout << "Please enter a password to check: ";
//    cin.ignore();
//    getline(cin, password);
//    
//
//    // Encode the password.
//    morse = morseString(password);
//
//    // Open the file.
//    file.open(fname);
//    
//    // Trim morse
//    makeTrim(morse);
//
//    // Read through the file.
//    while(file) {
//
//        string fileLine;
//
//        getline(file, fileLine);
//
//        // Trim the file
//        makeTrim(fileLine);
//
//        // There is a matching password
//        if(fileLine.compare(morse) == 0) {
//            cout << endl;
//            cout << "Password is acceptable." << endl << endl;
//            return;
//        }
//
//    }
//    
//    // NO matching passwords
//    cout << endl;
//    cout << "The password is unacceptable." << endl << endl;
//
//    // Close the file.
//    file.close();
//
//
////    cout << "Temporary message :  Not working yet" << endl;
//    return;
//}
//
//
//
//string getPassword(string message) {
//
//    // Properties
//    string password;
//    string morse;
//    
//    // This is what makes a password valid.
//    cout << "Passsword must have the following: " << endl;
//    cout << "Must contain at least 8 letters." << endl;
//    cout << "Must contain at least 4 numbers." << endl;
//    cout << "Must contain at least 1 valid symbol." << endl;
//    cout << "Valid symbols: '.', ',', '?', ' '." << endl;
//    cout << endl;
//
//    // Takes user input to assign to the password.
//    cout << message;
//    cin.ignore();
//    getline(cin, password);
//    
//    return password;
//
//}
//
//// Checks if the password is valid or not.
//bool validatePassword(string password) {
//
//    // Properties
//    string validSymbols = ".,?";
//    int letters = 0;
//    int nums = 0;
//    int symbols = 0;
//
//    // Get the total number of letters, numbers, and symbols.
//    for(int i = 0; i < password.length(); i++) {
//
//        char currentChar = password.at(i);
//
//        if(isdigit(currentChar)) {
//            nums++;
//        } else if(isalpha(currentChar)) {
//            letters++;
//        } else if(validSymbols.find(1, currentChar) || isspace(currentChar)) {
//            symbols++;
//        }
//
//    }
//
//    if(password.length() < 10) return false; // Word is at least 10 characters.
//    if(letters < 8) return false; // Word contains at least 8 letters.
//    if(nums < 4) return false; // Word contains at least 4 numbers.
//    if(symbols < 1) return false; // Word contains at least 1 symbol.
//
//    // The word is a valid password.
//    return true;
//
//}
//
//// This method will change each char to its morse code equivalent.
//string charToMorse(char character) {
//
//
//    if(character == 'A')return "*-";
//    if(character == 'B')return "-***";
//    if(character == 'C')return "-*-*";
//    if(character == 'D')return "-**";
//    if(character == 'E')return "*";
//    if(character == 'F')return "**-*";
//    if(character == 'G')return "--*";
//    if(character == 'H')return "****";
//    if(character == 'I')return "**";
//    if(character == 'J')return "*---";
//    if(character == 'K')return "-*-";
//    if(character == 'L')return "*-**";
//    if(character == 'M')return "--";
//    if(character == 'N')return "-*";
//    if(character == 'O')return "---";
//    if(character == 'P')return "*--*";
//    if(character == 'Q')return "--*-";
//    if(character == 'R')return "*-*";
//    if(character == 'S')return "***";
//    if(character == 'T')return "-";
//    if(character == 'U')return "**-";
//    if(character == 'V')return "***-";
//    if(character == 'W')return "*--";
//    if(character == 'X')return "--*--";
//    if(character == 'Y')return "-*--";
//    if(character == 'Z')return "--**";
//    if(character == '0')return "-----";
//    if(character == '1')return "*----";
//    if(character == '2')return "**---";
//    if(character == '3')return "***--";
//    if(character == '4')return "****-";
//    if(character == '5')return "*****";
//    if(character == '6')return "-****";
//    if(character == '7')return "--***";
//    if(character == '8')return "---**";
//    if(character == '9')return "----*";
//    if(character == ',')return "--**--";
//    if(character == '.')return "*-*-*-";
//    if(character == '?')return "**--**";
//    if(character == ' ')return "/";
//
//    return "";
//
//}
//
//// Trims while reading from a file.
//void makeTrim(string &x) {
//    const char* ws = " \t\n\r\f\v"; //List of space Characters x.erase(0,
//    x.find_first_not_of(ws); //prefixing spaces
//    x.erase(x.find_last_not_of(ws)+1); //surfixing spaces
//}
//
//// This method returns the morse code string.
//string morseString(string password) {
//
//    // Properties
//    string morse;
//
//    // This loop will convert each char into its morse code.
//    for(int i = 0; i < password.length(); i++) {
//
//        char c = password.at(i);
//
//        morse += charToMorse(toupper(c)) + " ";
//
//    }
//
//    return morse;
//
//}
