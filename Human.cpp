#include <iostream>
#include "Human.h"

Human::Human(){
    name = "Human";
}

Human::Human(string name){
    this->name = name;
}

void Human::setName(string name){
    this->name = name;
}

Move* Human::makeMove(){
    string moveName;
    cout << "Enter move: ";
    cin >> moveName;
    Move* selectedMove = moveList.moveSearch(moveName);
    while (selectedMove == nullptr){
        cout << "Please enter a valid move: ";
        cin >> moveName;
        selectedMove = Player::moveList.moveSearch(moveName);
    }
    Player::move = selectedMove;
    return selectedMove;
}