#include <iostream>
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    for (const auto& move : move1->getBeats()) {
        if (move == move2->getName()) {                
            delete move1;
            delete move2;
            return player1;
        }
    }
    for (const auto& move : move2->getBeats()) {
        if (move == move1->getName()) {
            delete move1;
            delete move2;
            return player2;
        }
    }

    delete move1;
    delete move2;
    return nullptr;
}