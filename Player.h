#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player {
    protected:
        string name;
    
    public:
        Player();

        virtual char makeMove() = 0;
        string getName();   
};

#endif