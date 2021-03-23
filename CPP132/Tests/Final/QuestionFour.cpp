//
//  QuestionFour.cpp
//  CPP132
// This program has a function that will
// accept a map of students and students GPA
// and retunr a set of students who are failing
// or are in danger of failing.
//
//  Created by Lucas Dahl on 3/22/21.
//

//#include <iostream>
//#include <string>
//#include <map>
//#include <set>
//
//using namespace std;
//
//// Prototype
//set<string> showFail(map<string, double>);
//
//int main() {
//    
//    // Properties
//    map<string, double> studentGPA;
//    
//    // dummy data
//    studentGPA.insert(pair<string, double>("Mindy", 2.2));
//    studentGPA.insert(pair<string, double>("Bill", 3.8));
//    studentGPA.insert(pair<string, double>("Link", 4.0));
//    studentGPA.insert(pair<string, double>("Erlic", 1.0));
//    studentGPA.insert(pair<string, double>("Richard", 4.0));
//    studentGPA.insert(pair<string, double>("Gil", 3.7));
//    
//    //. Make the list of failing students.
//    set<string> failing = showFail(studentGPA);
//    
//    // Print out all the failing students
//    for(string student : failing) {
//        cout << student << endl;
//    }
//    
//}
//
//// This function will return a set of names of students who are failing
//set<string> showFail(map<string, double> students) {
//    
//    // Properties
//    set<string> failingStudents;
//    double average = 0;
//    double total = 0;
//    
//    // Get the total
//    for(auto itr = students.begin(); itr != students.end(); itr++) {
//        total += itr->second;
//    }
//    
//    // Get teh average
//    average = total / students.size();
//
//    
//    // Find the failing students
//    for(auto itr = students.begin(); itr != students.end(); itr++) {
//        
//        if(itr->second < average) {
//            failingStudents.insert(itr->first);
//        }
//        
//    }
//    
//    return failingStudents;
//    
//}
