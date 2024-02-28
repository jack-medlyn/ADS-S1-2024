#include <iostream>
#include "Human.h"
#include "Player.h"

Human::Human(){
    name = "Human";
    cout << "Enter move:" << endl;
    cin >> Player::name;
}

Human::Human(string name){
    this->name = name;
    cout << "Enter move:" << endl;
    cin >> Player::move;
}