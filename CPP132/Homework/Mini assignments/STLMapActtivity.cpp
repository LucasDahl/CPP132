//
//  STLMapActtivity.cpp
//  CPP132
//
//  Created by Lucas Dahl on 3/1/21.
//

#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

void doP(string x)  {cout << x << endl;}
set<string> criticsPick(map<string,double>);

int main() {
   map<string,double> movieList;

   string fname = "Movies.txt";
   ifstream myfile;
   myfile.open(fname);

   if (myfile.is_open() )
   { cout << "File Opened" << endl; }
   else
   {
      cout << "BAD : " +fname<< endl;
      return -99;
   }
   string nameString = "";
   string scoreString = "";

   while (myfile)
   {
      getline(myfile,nameString);
      getline(myfile,scoreString);

      movieList[nameString]= atof(scoreString.c_str());
   }

   //Uncomment this out to see the map.
//   map<string,double>::iterator it = movieList.begin();
//   while(it != movieList.end())
//   {
//     std::cout<<it->first<<" :: "<<it->second<<std::endl;
//      it++;
//   }

   set<string> results;
   results = criticsPick(movieList);

   for_each(results.begin(),results.end(),doP);
}

set<string> criticsPick(map<string,double> theMap) {
    
    // Properties
    set<string> theSet;
    string strToAdd;
    int max = -1;
    
    if(theMap.size() < 10) {
        for(auto &itr : theMap) {
            theSet.insert(itr.first);
        }
    } else {
        while (theSet.size() < 5) {
            
            // Get the max score
            for (auto itr = theMap.begin(); itr != theMap.end(); itr++) {
                if(itr->second > max) {
                    max = itr->second;
                    strToAdd = itr->first;
                }
            }
            
            
            theSet.insert(strToAdd); // Add the value of the
            max = -1; // reset the max to -1
            theMap.erase(theMap.find(strToAdd)); // erase the max element
            
        }
        
    }
    
    // Return the set
    return theSet;
}
