//
//  ExtraMethods.cpp
//  CPP132
//
//  Created by Lucas Dahl on 2/10/21.
//

#include "ExtraMethods.hpp"
#include <iostream>
#include <random> // needed for random
#include <chrono> // needed for random

using namespace std;

// class Methods
// Global random number
unsigned WC_seed1 = chrono::system_clock::now().time_since_epoch().count();
default_random_engine WC_rd(WC_seed1);
mt19937 WC_mt(WC_rd());

int makeRandomNumber(int MIN, int MAX) {
    uniform_int_distribution<int> dist(MIN, MAX);
    return dist(WC_mt);
}
