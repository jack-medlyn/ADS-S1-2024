#include <iostream>
#include <string>
#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player{
    Move* move = new Rock; 
    public:
    Computer();
    Move * makeMove();
};

#endif