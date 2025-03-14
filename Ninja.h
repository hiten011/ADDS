#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja: public Move{
    public:
        Ninja();
        int ref(Move* opp);
        
};

#endif