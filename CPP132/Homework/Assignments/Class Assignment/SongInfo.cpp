//
//  SongInfo.cpp
//  CPP132
//
// This class is to contain the methods
// that will setup the SongInfo object.
// Other methods will allow the program
// to print the songInfo or get teh year.
//
//  Created by Lucas Dahl on 1/20/21.
//

#include "SongInfo.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//===================
// MARK: Constructors
//===================

// This is the default constructor that will set all the values.
SongInfo::SongInfo() {
    
    songName = "Unknown";
    recordedYear = 0;
    songLength = 0;
  
}

// This constructor will set all the fields
SongInfo::SongInfo(string name, int year, double time) {

    songName = setName(name);
    recordedYear = setYear(year);
    songLength = setLength(time);
    
}


// This constructor is used to set just the name.
SongInfo::SongInfo(string name) {
    
    songName = setName(name);
    
}

// This constructor will set everything except the son length
SongInfo::SongInfo(string name, int year) {
    
    songName = setName(name);
    recordedYear = setYear(year);
    
}

//==============
// MARK: Methods
//==============

// This method prints the song info
void SongInfo::printSong() {

    cout << "Song-" << left << setw(26) << songName ;
    
    // Make sure there is a year, or dont print it.
    if(setYear(recordedYear > 1)) {
        cout << ": recorded in year " << recordedYear;
    }
    
    // Make sure the song length is more than zero, or dont print it.
    if(setLength(songLength) > 1) {
        cout << ": length- "  << setprecision(2) << fixed << songLength << " minutes";
    }
    
    // Move to the next lie.
    cout << endl;
}

// This method simple gets the song length
double SongInfo::getTime() {
    return songLength;
}

// This method will make sure there is a name,
// or assign "Unknown".
string SongInfo::setName(string n) {
    
    
    if(n.length() < 1) {
        return "Unknown";
    }
    
    return n;
    
}

// This methos makes sure the song length is not below zero.
double SongInfo::setLength(double l) {
    
    if(l < 1.0) {
        return 0.0;
    }
    
    return l;
}

// This method makes sure the year is not below zero
int SongInfo::setYear(int y) {
    
    if(y < 1) {
        return 0;
    }
    
    return y;
}
