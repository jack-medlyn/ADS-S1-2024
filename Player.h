#include <iostream>
#include <string>
#include "Move.h"

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
    protected:
        Move* move;
        string name;
        static PossibleMoves moveList;
    public:
        virtual Move* makeMove();
        string getName();
};

#endif