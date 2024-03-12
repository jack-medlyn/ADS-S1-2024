#include <iostream>
#include <string>

using namespace std;

#ifndef MOVE_H
#define MOVE_H

class Move{
    public:
        virtual ~Move(){};
        virtual string getName() = 0;
};

class Rock : public Move{
    string getName(){return "Rock";};
    string beats = "Scissors";
};

class Paper : public Move{
    string getName(){return "Paper";};
    string beats = "Rock";
};

class Scissors : public Move{
    string getName(){return "Scissors";};
    string beats = "Paper";
};

class Robot : public Move{
    string getName(){return "Robot";};
    string beats[2] = {"Zombie", "Ninja"};
};

class Monkey : public Move{
    string getName(){return "Monkey";};
    string beats[2] = {"Ninja", "Robot"};
};

class Ninja : public Move{
    string getName(){return "Ninja";};
    string beats[2] = {"Pirate", "Zombie"};
};

class Pirate : public Move{
    string getName(){return "Pirate";};
    string beats[2] = {"Robot", "Monkey"};
};

class Zombie : public Move{
    string getName(){return "Zombie";};
    string beats[2] = {"Monkey", "Pirate"};
};

#endif