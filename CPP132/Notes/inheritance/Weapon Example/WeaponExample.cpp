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
#include "RangedWeapon.hpp"



using namespace std;

void doThing(Sword *);

int main() {
    
    Sword x;
    Dagger y;
    
    // Without this being a pointer x(Dagger) would print sword
    // C++ works well with pointers and subclass
    doThing(&x);
    doThing(&y);
    
    cout << endl << endl << endl;
    
    vector<Weapon*> myArmy;
    
    myArmy.push_back(new Sword());
    myArmy.push_back(new Mace());
    myArmy.push_back(new Sword());
    myArmy.push_back(new Mace());
    myArmy.push_back(new Dagger());
    myArmy.push_back(new Club());
    myArmy.push_back(new Bow(5));
    myArmy.push_back(new CrossBow(55));
    
    
    for(int i = 0; i < myArmy.size(); i++) {
        myArmy[i]->printResults();
    }
    
    // Delete everything
    for(int i = 0; i < myArmy.size(); i++) {
        delete myArmy[i];
    }
    
}

void doThing(Sword *z) {
    z->printResults();
}

