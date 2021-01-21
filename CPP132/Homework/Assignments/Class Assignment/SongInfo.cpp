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
    
    songName = name;
    recordedYear = year;
    songLength = time;
    
}

SongInfo::SongInfo(string name) {
    
    songName = name;
    
}

SongInfo::SongInfo(string name, int year) {
    
    songName = name;
    recordedYear = year;
    
}

//==============
// MARK: Methods
//==============

// This method prints the song info
void SongInfo::printSong() {
    cout << "Song-" << songName << "    : recorded in year " << recordedYear << ": length- " << songLength << " minutes" << endl;
}

// This method simple gets the song length
double SongInfo::getTime() {
    return songLength;
}
