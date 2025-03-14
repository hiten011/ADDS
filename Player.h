#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Player {
    protected:
        string name;
    
    public:
        Player();
        Player(string name);
        virtual Move* makeMove() = 0;
        string getName();   
};

#endif