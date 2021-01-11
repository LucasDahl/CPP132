/*  CS132 Mini - programming Assignment
 *  cStrings
 *
 *  Complete the following program by writing the code
 *  for the 4 neccessary methods that are prototyped below.
 *  Do not make any changes to the main or the prototypes.
 *
 *  For this assignment you may not use the string data type.
 *  
 *  Hint,  you might want write the last method first so that you 
 *  can use it in the 3rd method.  
 *
 *  Good luck.
 */
//#include <iostream>
//
//using namespace std;
//
//
//void upperCase_cString(char[]);
//void lowerCase_cString(char[]);
//void reverse_cString(char[]);
//int find_len_cString(char[]);
//
//
//int main()
//{
//    char a[] = "Hello World";
//    char b[] = {'M','i','c','k','y',' ','M','o','u','s','e','\0'};
//    char c[] = "abcdefghijklmnopqrstuvwxyz";
//    char d[] = "ABCDE...VWXYZ";
//    char e[] = "This is a test \0 OF THE END OF STRING CHARACTER";
//
//    cout << "BEFORE" << endl;
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << d << endl;
//    cout << e << endl;
//    cout << endl << "AFTER" << endl<< endl<< endl;
//
//    upperCase_cString(a);
//    cout << a << endl;
//
//    lowerCase_cString(b);
//    cout << b << endl;
//
//    reverse_cString(c);
//    cout << c << endl;
//
//	reverse_cString(d);
//    cout << d << endl;
//
//	reverse_cString(e);
//    cout << e << endl;
//
//    cout << find_len_cString(d) << endl;
//    cout << find_len_cString(e) << endl;
//
//}
//
//
//void upperCase_cString(char charArray[]) {
//    
//    // Properties
//    int size = find_len_cString(charArray);
//    
//    for(int i = 0; i < size; i++) {
//        char tempUp = toupper(charArray[i]);
//        charArray[i] = tempUp;
//    }
//    
//}
//
//void lowerCase_cString(char charArray[]) {
//    
//    // Properties
//    int size = find_len_cString(charArray);
//    
//    for(int i = 0; i < size; i++) {
//        char tempLower = tolower(charArray[i]);
//        charArray[i] = tempLower;
//    }
//    
//}
//
//void reverse_cString(char charArray[]) {
//    
//    // Properties
//    int size = find_len_cString(charArray) - 1;
//
//    for(int i = 0; i < size / 2; i++) {
//        char temp = charArray[i];
//        charArray[i] = charArray[size - i];
//        charArray[size - i] = temp;
//    }
//}
//
//int find_len_cString(char charArray[]) {
//
//    int length = 0;
//
//    while(charArray[length] != '\0') {
//        length++;
//    }
//
//    return length;
//
//}
