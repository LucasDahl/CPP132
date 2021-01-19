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
//    for(int i = 0; i < phrase.length(); i++) {
//        
//        char currentChar = phrase.at(i);
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
//    cout << letters << endl;
//    cout << nums << endl;
//    cout << symbols << endl;
//    
//}
