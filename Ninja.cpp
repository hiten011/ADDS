#include "Ninja.h"

Ninja::Ninja(): Move("Ninja") {}

int Ninja::ref(Move* opp) {
    if (opp->getName() == "Pirate" || opp->getName() == "Zombie") { // won
        return 0;
    } else if (opp->getName() == "Ninja") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}