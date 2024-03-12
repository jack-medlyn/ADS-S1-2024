#include <iostream>
#include "Player.h"
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main(){
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    Human h1(name);
    Computer c2;

    Referee r1;

    Player* winner = r1.refGame(&h1, &c2);

    if (winner != nullptr){
        cout << winner->getName() << " Wins." << endl;
    } else {
        cout << "It's a Tie." << endl;
    }

    return 0;
}