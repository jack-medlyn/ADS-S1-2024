#include <iostream>
#include <string>
#include "Player.cpp"
#ifndef REFEREE_H
#define REFEREE_H

using namespace std;

class Referee{
    public:
    Referee();
    Player * refGame(Player * player1, Player * player2);
};

#endif