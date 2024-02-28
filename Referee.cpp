#include <iostream>
#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2){
    if (player1->makeMove() == player2->makeMove()){
        return nullptr;
    } else if (player1->makeMove() == 'R' && player2->makeMove() == 'S'){
        return player1;
    } else if (player1->makeMove() == 'R' && player2->makeMove() == 'P'){
        return player2;
    } else if (player1->makeMove() == 'P' && player2->makeMove() == 'R'){
        return player1;
    } else if (player1->makeMove() == 'P' && player2->makeMove() == 'S'){
        return player2;
    } else if (player1->makeMove() == 'S' && player2->makeMove() == 'P'){
        return player1;
    } else if (player1->makeMove() == 'S' && player2->makeMove() == 'R'){
        return player2;
    }
}