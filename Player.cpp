#include <iostream>
#include "Player.h"

Move* Player::makeMove(){
    return move;
}

string Player::getName(){
    return name;
}

vector<string> Player::getBeats(){
    return move->getBeats();
}

