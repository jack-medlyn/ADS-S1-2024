#include <iostream>
#include <string>
#include "Move.h"
#include <vector>
using namespace std;

#ifndef POSSIBLEMOVES_H
#define POSSIBLEMOVES_H

class PossibleMoves{
    private:
        std::vector<std::unique_ptr<Move>> moves;
    public:
        PossibleMoves(){
            moves.push_back(std::make_unique<Rock>());
            moves.push_back(std::make_unique<Paper>());
            moves.push_back(std::make_unique<Scissors>());
            moves.push_back(std::make_unique<Robot>());
            moves.push_back(std::make_unique<Monkey>());
            moves.push_back(std::make_unique<Ninja>());
            moves.push_back(std::make_unique<Pirate>());
            moves.push_back(std::make_unique<Zombie>());
        }
        Move* moveSearch(string moveName){
            for (const auto& move : moves) {
                if (move->getName() == moveName) {
                return move.get();
                }
            }
            return nullptr;
        }
};

#endif

