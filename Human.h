#ifndef HUMAN_H
#define HUMAN_H

#include "Move.h"
#include "Player.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Robot.h"

#include <iostream>

class Human: public Player {
    public:
        Human();
        Human(std::string name);

        Move* makeMove();
};

#endif