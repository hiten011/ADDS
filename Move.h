#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>

using namespace std;

class Move {
    protected:
        string name;
    public:
        Move();
        Move(string name);
        string getName();
        virtual int ref(Move* opp) = 0;
        
};

#endif