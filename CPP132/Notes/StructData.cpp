//
//  StructData.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/8/21.
//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Time { // doesnt have to be caps, but probaly should be  -- Must make structs before functions, no prototype
//    // Structs can have their own file.
//
//    int hours;
//    int minutes;
//    int seconds;
//    
//    bool am;
//    
//}; // Structs need ; at the end
//
//// Prototype
//bool compareTime(Time a, Time b);
//void addSecond(Time a);
//void printTime(const Time &);
//Time createNoon();
//
//int main() {
//    
//    Time now;
//    Time dinner;
//    Time bedTime;
//    
//    now.hours = 10;
//    now.minutes = 27;
//    now.seconds = 45;
//    now.am = true;
//    
//    dinner.hours = 6;
//    dinner.minutes = 30;
//    dinner.seconds = 0;
//    dinner.am = false;
//    
//    bedTime.hours = 10;
//    bedTime.minutes = 15;
//    bedTime.seconds = 59;
//    bedTime.am = false;
//    
//    cout << "You got grounded";
//    bedTime.hours = bedTime.hours - 2;
//    
//    if(compareTime(now, dinner)) {
//        cout << "Lets eat!";
//    }
//    
//    
//    while (true) {
//        printTime(now);
//        addSecond(now);
//        cout << endl;
//    }
//    
//}
//
//
//bool compareTime(Time a, Time b) {
//    if(a.hours != b.hours) return false;
//    if(a.minutes != b.minutes) return false;
//    if(a.seconds != b.seconds) return false;
//    if(a.am != b.am) return false;
//    return true;
//}
//
//
//void addSecond(Time &a) {
//    a.seconds++;
//    if(a.seconds == 60) {
//        a.minutes++;
//        a.seconds = 0;
//    }
//    
//    if(a.minutes == 60) {
//        a.hours++;
//        a.minutes = 0;
//    }
//    
//    if(a.hours == 13) {
//        a.hours = 1;
//        a.am |= a.am;
//    }
//}
//
//void printTime(const Time &a) { // passes it by reference to save time/memory, but forces the compiler to watch for changes.
//    
//    // FIX
//    cout << a.hours << ":";
//    if (a.minutes < 10 ) cout << "0" << a.minutes << ":" << a.seconds << " ";
//    else cout << a.minutes;
//    
//    if (a.seconds < 10 ) cout << "0" << a.minutes << ":" << a.seconds << " ";
//    else cout << a.seconds;
//    
//    if(a.am) cout << "AM";
//    else cout << "PM";
//}
//
//Time createNoon() { // returns a struct
//    Time x;
//    x.hours = 12;
//    x.minutes = 0;
//    x.seconds = 0;
//    x.am = false;
//    
//    return x;
//}
