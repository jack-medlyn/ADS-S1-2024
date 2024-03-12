#include <iostream>
#include <string>
#include "Move.h"
#include <vector>
using namespace std;

#ifndef POSSIBLEMOVES_H
#define POSSIBLEMOVES_H

class PossibleMoves{
    private:
        vector<Move*> moves;
    public:
        PossibleMoves(){
            moves.push_back(new Rock);
            moves.push_back(new Paper);
            moves.push_back(new Scissors);
            moves.push_back(new Robot);
            moves.push_back(new Monkey);
            moves.push_back(new Ninja);
            moves.push_back(new Pirate);
            moves.push_back(new Zombie);
        }
        Move* moveSearch(string moveName){
            for (const auto& move : moves) {
                if (move->getName() == moveName) {
                return move;
                }
            }
            return nullptr;
        }
};

#endif

