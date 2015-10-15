//
//  Level.hpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#ifndef Level_hpp
#define Level_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Level {
private:
    int difficulty;
    vector<int> foes;
public:
    Level(int difficulty);
    virtual ~Level();
    int getDifficulty();

    vector<int> getFoes();
    void addFoes(int foes);
    void addFoes(vector<int> foes);
    
    int getTotal();
    void print();
};

inline int Level::getDifficulty() {
    return difficulty;
}

inline void Level::addFoes(int foes) {
    this->foes.push_back(foes);
}

inline void Level::addFoes(vector<int> foes) {
    this->foes.insert(this->foes.end(), foes.begin(), foes.end());
}

inline vector<int> Level::getFoes() {
    return foes;
}

inline int Level::getTotal() {
    int nsum = 0;
    for (int n : foes)
        nsum += n;
    
    return nsum;
}

inline void Level::print() {
    cout << foes.size() << " ";
    for (int n : foes)
        cout << n << " ";
    cout << endl;
}

#endif /* Level_hpp */
