#include <iostream>
#include "Human.h"
#include "Player.h"

Human::Human(){
    name = "Human";
    move = 'l';
    while (move != 'R' && move != 'P' && move != 'S') {
        std::cout << "Enter move: ";
        std::cin >> move;
    }
}

Human::Human(string name){
    this->name = name;
    move = 'l';
    while (move != 'R' && move != 'P' && move != 'S') {
        std::cout << "Enter move: ";
        std::cin >> move;
    }
}

void Human::setName(string name){
    this->name = name;
}