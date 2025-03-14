#ifndef MOVE_H
#define MOVE_H

class Move {
    protected:
        string name;
    public:
        Move();
        Move(string name);
        string getName();
        virtual boolean ref(Move* opp) = 0;
        
};

#endif