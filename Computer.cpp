#include <iostream>
#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    name = "Computer";
}

Move* Computer::makeMove(){
    return move;
}