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

#define DEFAULT_FOLDER "./"
#define FILE_FOES "data/foes.txt"
#define FILE_LEVELS "data/levels.txt"

int main(int argc, const char * argv[]) {
    string fFoes = "";
    string fLevels = "";
    bool debug = false;
    if (argc > 2) {
      fFoes = argv[1];
      fLevels = argv[2];
      if (argc > 3)
        debug = (bool)argv[3];
    }
    else {
      cout << "Entrada inválida" << endl;
      return 0;
    }

    // string fFoes = string(DEFAULT_FOLDER) + string(FILE_FOES);
    // string fLevels = string(DEFAULT_FOLDER) + string(FILE_LEVELS);
    Settings settings(fFoes, fLevels);
    
    //Brute Force
    cout << "Brute Force" << endl;
    BruteForce fbAlgorithm(settings.getFoes(), settings.getLevels(), debug);

    return 0;
}
