//
//  MapNotes.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/26/21.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

// There is a pair in a map, thats why we use pair
void printSIPair(pair<string, int> x) {
    cout << x.first << " == " << x.second << endl;
}

int main() {
    
    map<string, int> ages;
    map<string, string> addresses;
    multimap<string, char> middleInitials;
    
    // insert pair
    ages.insert(pair<string, int>("Mindy", 13));
    ages.insert(pair<string, int>("Amy", 13));
    ages.insert(pair<string, int>("Joe", 14));
    
    // insert mak_pair()
    ages.insert(make_pair("Billy", 12));
    addresses.insert(make_pair("Amy", "12345 oak lane"));
    
    // use the [ ]
    ages["Dan"] = 15;
    
//    middleInitials.insert(make_pair("Amy", 'A'));
//    middleInitials.insert(make_pair("Amy", 'M'));
    
    ages.insert(make_pair("Amy", 77)); // doesnt works?
    ages["Mindy"] = 77;
    
//    cout << ages["Mindy"] << endl;
//    cout << ages["Amy"] << endl;
//    cout << ages["Joe"] << endl;
    
    // Printing maps
    
    // key = first
    // value = second
    
    // can do map<string, int>::iterator it = ages.begin()
    for(auto it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << " = " << it->second << endl;
    }
    
    
    // Erase
    ages.erase("Mindy");
    
    // or
    
    auto it = ages.find("dan");
    ages.erase(it);
    
    for_each(ages.begin(), ages.end(), printSIPair);
    
}
