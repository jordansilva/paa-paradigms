//
//  main.cpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#include <iostream>
#include "src/helper/Settings.hpp"
#include "src/algorithms/BruteForce.hpp"
#include "src/algorithms/Greedy.hpp"
#include "src/algorithms/Dynamic.hpp"

#define DEFAULT_FOLDER "/Volumes/Tyr/Projects/UFMG/Disciplinas/PAA/TP 2/assassins greed/assassins greed/"
#define FILE_FOES "data/foes.txt"
#define FILE_LEVELS "data/levels.txt"

void exec() {
    //Loading Settings (Default)
    string fFoes = string(DEFAULT_FOLDER) + string(FILE_FOES);
    string fLevels = string(DEFAULT_FOLDER) + string(FILE_LEVELS);
    Settings settings(fFoes, fLevels);
    
    //Greedy
//    cout << "Greedy" << endl;
//    Greedy agAlgorithm(settings.getFoes(), settings.getLevels(), true);
//    cout << endl << endl;
    
    //Dynamic
//    cout << "Dynamic" << endl;
//    Dynamic pdAlgorithm(settings.getFoes(), settings.getLevels(), true);
//    cout << endl << endl;
    
    //Brute Force
    cout << "Brute Force" << endl;
    BruteForce fbAlgorithm(settings.getFoes(), settings.getLevels(), true);
    cout << endl << endl;
    
    //Doing algorithms
}

int main(int argc, const char * argv[]) {
    exec();
//    std::cout << "Hello, World!\n";
    return 0;
}
