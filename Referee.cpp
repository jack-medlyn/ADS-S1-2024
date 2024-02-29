#include <iostream>
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    if (player1->makeMove() == player2->makeMove()){
        return nullptr;
    } else if ( (player1->makeMove() == 'R' && player2->makeMove() == 'S') || 
                (player1->makeMove() == 'P' && player2->makeMove() == 'R') ||
                (player1->makeMove() == 'S' && player2->makeMove() == 'P') ){
        return player1;
    } else {
        return player2;
    }
}