#include <iostream>
#include <string>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
    protected:
        char move;
        string name;
    public:
        char makeMove();
        string getName();
};

#endif