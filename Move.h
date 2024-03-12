#include <iostream>
#include <string>

using namespace std;

#ifndef MOVE_H
#define MOVE_H

class Move{
    protected:
        vector<string> beats;
        string name;
    public:
        virtual ~Move(){};
        string getName(){return name;};
        vector<string> getBeats(){return beats;}
};

class Rock : public Move{
    public:
        Rock(){
            name = "Rock";
            beats.push_back("Scissors");
        }
};

class Paper : public Move{
    public:
        Paper(){
            name = "Paper";
            beats.push_back("Rock");
        }
};

class Scissors : public Move{
    public:
        Scissors(){
            name = "Scissors";
            beats.push_back("Paper");
        }
};

class Robot : public Move{
    public:
        Robot(){
            name = "Robot";
            beats.push_back("Zombie");
            beats.push_back("Ninja");
        }
};

class Monkey : public Move{
    public:
        Monkey(){
            name = "Monkey";
            beats.push_back("Robot");
            beats.push_back("Ninja");
        }
};

class Ninja : public Move{
    public:
        Ninja(){
            name = "Ninja";
            beats.push_back("Pirate");
            beats.push_back("Zombie");
        }
};

class Pirate : public Move{
    public:
        Pirate(){
            name = "Pirate";
            beats.push_back("Robot");
            beats.push_back("Monkey");
        }
};

class Zombie : public Move{
    public:
        Zombie(){
            name = "Zombie";
            beats.push_back("Pirate");
            beats.push_back("Monkey");
        }
};

#endif