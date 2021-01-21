//
//  SongInfo.cpp
//  CPP132
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
SongInfo::SongInfo() {

    
}
SongInfo::SongInfo(string name, int year, double time) {
    
    songName = checkName(name);
    recordedYear = checkYear(year);
    songLength = checkLength(time);
    
}

SongInfo::SongInfo(string name) {
    
    songName = checkName(name);
    
}

SongInfo::SongInfo(string name, int year) {
    
    songName = checkName(name);
    recordedYear = checkYear(year);
    
}

//==============
// MARK: Methods
//==============

// This method prints the song info
void SongInfo::printSong() {

    cout << "Song-" << left << setw(26) << songName ;
    
    // Make sure there is a year, or dont print it.
    if(checkYear(recordedYear > 1)) {
        cout << ": recorded in year " << recordedYear;
    }
    
    // Make sure the song length is more than zero, or dont print it.
    if(checkLength(songLength) > 1) {
        cout << ": length- " << left << setw(10) <<setprecision(2) << fixed << songLength << " minutes";
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
string SongInfo::checkName(string n) {
    
    
    if(n.length() < 1) {
        return "Unknown";
    }
    
    return n;
    
}

// This methos makes sure the song length is not below zero.
double SongInfo::checkLength(double l) {
    
    if(l < 1.0) {
        return 0.0;
    }
    
    return l;
}

// This method makes sure the year is not below zero
int SongInfo::checkYear(int y) {
    
    if(y < 1) {
        return 0;
    }
    
    return y;
}
