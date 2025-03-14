#include "Rock.h"

Rock::Rock(): Move("Rock") {}

int Rock::ref(Move* opp) {
    if (opp->getName() == "Scissors") { // won
        return 0;
    } else if (opp->getName() == "Rock") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}