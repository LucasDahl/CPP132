//
//  charString.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/4/21.
//

//#include <string>
//#include <cstdlib>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//string charToMorse(char);
//
//int main() {
//
////    char x = 'a';
////    char z[12] = "Hello World"; // secret char '\0' null character to signify the end of the string
//////    char* str1 = "Hello World";
//////    char str2[] = "Hello Word"; // c style string
////
////    x = toupper(x);
////
////    //cin.getline(x,y) // This will cut some of the data based off a size(y) and x would be user input.
////
////    cout << x;
////
////    cout << z << endl;
////   // cout << z.length() << endl;
//    
////    int x;
////    x = atoi("p");
////
////    cout << x << endl;
//    
//        string phrase;
//        //char validSymbols[] = {'.', '?', ',', ' '};
//        string validSymbols = ".,?";
//        int letters = 0;
//        int nums = 0;
//        int symbols = 0;
//    
//    cout << "Please enter a word or phrase to add to the list of acceptable passwords" << endl;
//    getline(cin, phrase);
//    
//    
//    // Check that the phrase is valid.
//    //if(phrase.length() < 10) return; // Word is at least 10 characters.
//    
//    // Get the total number of letters, numbers, and symbols.
////    for(int i = 0; i < phrase.length(); i++) {
////
////        char currentChar = phrase.at(i);
////
////        if(isdigit(currentChar)) {
////            nums++;
////        } else if(isalpha(currentChar)) {
////            letters++;
////        } else if(validSymbols.find(1, currentChar) || isspace(currentChar)) {
////            symbols++;
////        }
////
////    }
////
////    cout << letters << endl;
////    cout << nums << endl;
////    cout << symbols << endl;
//    
//    string morse;
//    
//    for(int i = 0; i < phrase.length(); i++) {
//        
//        char c = phrase.at(i);
//        
//        morse += charToMorse(toupper(c)) + " ";
//    
//    }
//    
//    cout << morse << endl;
//    
//}
//
//string charToMorse(char character) {
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
//    return "/";
//    
//}
//
////**** * *-** *-** --- / *-- --- *-* *-** -** / *---- **--- ***-- ****- (from PDF)
////**** * *-** *-** --- / *-- --- *-* *-** -** / *---- **--- ***-- ****-
