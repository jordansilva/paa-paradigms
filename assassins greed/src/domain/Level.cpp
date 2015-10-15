//
//  Level.cpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#include "Level.hpp"

Level::Level(int difficulty) {
    this->difficulty = difficulty;
    this->foes = vector<int>();
}

Level::~Level() {
    
}