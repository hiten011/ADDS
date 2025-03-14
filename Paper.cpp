#include "Paper.h"

Paper::Paper(): Move("Paper") {}

int Paper::ref(Move* opp) {
    if (opp->getName() == "Rock") { // won
        return 0;
    } else if (opp->getName() == "Paper") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}