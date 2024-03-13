#include <iostream>
#include <string>
#include <vector>
#include "Move.h"
#include "PossibleMoves.h"

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
    protected:
        Move* move;
        string name;
        PossibleMoves moveList;
    public:
        virtual Move* makeMove();
        string getName();
        vector<string> getBeats();
};

#endif