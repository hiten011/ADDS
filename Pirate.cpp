#include "Pirate.h"

Pirate::Pirate(): Move("Pirate") {}

int Pirate::ref(Move* opp) {
    if (opp->getName() == "Robot" || opp->getName() == "Monkey") { // won
        return 0;
    } else if (opp->getName() == "Pirate") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}