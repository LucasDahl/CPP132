//
//  WeaponExample.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/9/21.
//

#include <iostream>
#include <string>
#include <vector>
#include "Weapon.hpp"

using namespace std;

int main() {

    
    vector<Weapon*> myArmy;
    
    myArmy.push_back(new Weapon());
    myArmy.push_back(new Weapon());
    myArmy.push_back(new Weapon());
    myArmy.push_back(new Sword());
    myArmy.push_back(new Mace());
    myArmy.push_back(new Sword());
    myArmy.push_back(new Mace());
    myArmy.push_back(new Dagger());
    
    for(int i = 0; i < myArmy.size(); i++) {
        myArmy[i]->printResults();
    }
    
}
