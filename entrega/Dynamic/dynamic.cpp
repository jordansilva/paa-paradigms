//
//  main.cpp
//  Assassins Greed
//
//  Created by Jordan Silva on 10/11/15.
//  Copyright © 2015 Jordan Silva. All rights reserved.
//

#include <iostream>
#include "src/helper/Settings.hpp"
#include "src/algorithms/Dynamic.hpp"

#define DEFAULT_FOLDER "./"
#define FILE_FOES "data/foes.txt"
#define FILE_LEVELS "data/levels.txt"

int main(int argc, const char * argv[]) {
    string fFoes = "";
    string fLevels = "";
    bool fDebug = false;
    if (argc > 2) {
      fFoes = argv[1];
      fLevels = argv[2];
      if (argc > 3)
        fDebug = (bool)argv[3];
    }
    else {
      cout << "Entrada inválida" << endl;
      return 0;
    }

    Settings settings(fFoes, fLevels);
    
    //Dynamic
    cout << "Dynamic" << endl;
    Dynamic pdAlgorithm(settings.getFoes(), settings.getLevels(), fDebug);

    return 0;
}
