#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie: public Move{
    public:
        Zombie();
        int ref(Move* opp);
        
};

#endif