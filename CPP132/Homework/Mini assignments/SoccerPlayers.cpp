//
//  SoccerPlayers.cpp
//  CPP132
//
//  Created by Lucas Dahl on 1/12/21.
//

#include <iostream>
#include <string>

//using namespace std;
//
//// A struct for a soccer player.
//struct SoccerPlayer {
//  
//    // Properties
//    string pName;
//    int pNum;
//    int totalGoals;
//    
//};
//
//// Prototype methods
//void playerInfo(SoccerPlayer);
//int totalGoals(SoccerPlayer[], int);
//
//int main() {
//    
//    // Properties
//    SoccerPlayer sounders[5];
//    int length = *(&sounders + 1) - sounders;
//    int size = 5;
//    
//    // Set the array
//    sounders[0] = {"Pele", 5, 16};
//    sounders[1] = {"Lionel",53, 14};
//    sounders[2] = {"Diego", 25, 25};
//    sounders[3] = {"Johan", 12, 2};
//    sounders[4] = {"Zinedine", 88, 32};
//    
//    // Print out each player
//    for (int i = 0; i < length; i++) {
//        playerInfo(sounders[i]);
//        cout << endl;
//    }
//    
//    cout << "The number of goals for the team is : " << totalGoals(sounders, size) << endl;
//    
//}
//
//void playerInfo(SoccerPlayer player) {
//    
//    cout << "Player name : " << player.pName << endl;
//    cout << "Number : " << player.pNum << endl;
//    cout << "Number of goals this season : " << player.totalGoals << endl;
//    
//}
//
//int totalGoals(SoccerPlayer players[], int size) {
//    
//    // Properties
//    int total = 0;
//    
//    for (int i = 0; i < size; i++) {
//        total = total + players[i].totalGoals;
//    }
//    
//    return total;
//    
//}
