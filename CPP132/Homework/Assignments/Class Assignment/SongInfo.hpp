//
//  SongInfo.hpp
//  CPP132
//
//  Created by Lucas Dahl on 1/20/21.
//

#ifndef SongInfo_hpp
#define SongInfo_hpp

#include <iostream>
#include <string>

using namespace std;


class SongInfo {
  
    private:
        string songName;
        int recordedYear;
        double songLength;
    
    public:
    
        // Constructors
        SongInfo();
        SongInfo(string, int, double);
        SongInfo(string);
        SongInfo(string, int);
    
        // Methods
        void printSong();
        double getTime();
    
};

#endif /* SongInfo_hpp */
