#include <iostream>
#include <string>
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H

class Human : protected Player{
    public:
    Human(string name);
    Human();
};

#endif