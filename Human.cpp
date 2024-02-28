#include <iostream>
#include "Human.h"

using namespace std;

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