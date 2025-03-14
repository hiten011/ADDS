#include "Scissors.h"

Scissors::Scissors(): Move("Scissors") {}

int Scissors::ref(Move* opp) {
    if (opp->getName() == "Paper") { // won
        return 0;
    } else if (opp->getName() == "Scissors") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}