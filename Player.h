#include <iostream>
#include <string>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
    public:
        char move;
        string name;
        char makeMove();
        string getName();
};

#endif