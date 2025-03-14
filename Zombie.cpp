#include "Zombie.h"

Zombie::Zombie(): Move("Zombie") {}

int Zombie::ref(Move* opp) {
    if (opp->getName() == "Pirate" || opp->getName() == "Monkey") { // won
        return 0;
    } else if (opp->getName() == "Zombie") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}