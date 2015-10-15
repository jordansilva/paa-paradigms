//
//  Settings.hpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#ifndef Settings_hpp
#define Settings_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class Settings {
public:
    Settings(string foes, string levels);
    virtual ~Settings();
    
    vector<int> getFoes();
    vector<int> getLevels();
    
private:
    void init(string foes, string levels);
    vector<int> readFile(string filename);
    
    vector<int> mFoes;
    vector<int> mLevels;
};

inline vector<int> Settings::getFoes() {
    return mFoes;
}

inline vector<int> Settings::getLevels() {
    return mLevels;
}


#endif /* Settings_hpp */
