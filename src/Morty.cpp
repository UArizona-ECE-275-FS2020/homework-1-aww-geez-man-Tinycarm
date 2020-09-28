#include "Morty.hpp"
#include <iostream>
#include <iostream>
using namespace std;

/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/
int STOP;
int STEP;


// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
int C137::Morty(int START)
{
    for (START = START; START <= STOP; STEP++) {
    if (START % 15 == 0) {
        cout << START << ": Aww Geez Man\n";
    }
    else if (START % 3 == 0) {
        cout << "Geez\n";
    }
    else if (START % 5 == 0) {
        cout << "Aww\n";
    }
    }

};

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

int Z286::Morty(int START)
{
    for (START = START; START <= STOP; STEP++) {
    if (START % 15 == 0) {
        cout << "naM zeeG wwA";
    }
    else if (START % 3 == 0) {
        cout << "zeeG";
    }
    else if (START % 5 == 0) {
        cout << "wwA";
    }
    }

}
