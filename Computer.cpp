#include <iostream>
#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    name = "Computer";
    move = new Rock;
}

Move* Computer::makeMove(){
    return move;
}