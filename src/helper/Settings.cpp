//
//  Settings.cpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#include "Settings.hpp"

Settings::Settings(string foes, string levels) {
    init(foes, levels);
}

Settings::~Settings() {
    
}

void Settings::init(string fFoes, string fLevels) {
    this->mFoes = Settings::readFile(fFoes);
    this->mLevels = Settings::readFile(fLevels);
}

vector<int> Settings::readFile(string filename) {
    vector<int> result;

    try {
        string line;
        ifstream infileFoes(filename);
    
        while (getline(infileFoes, line)) {
            result.push_back(atoi(line.c_str()));
        }
    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }

    return result;
}


