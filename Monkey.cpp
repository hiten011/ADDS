#include "Monkey.h"

Monkey::Monkey(): Move("Monkey") {}

int Monkey::ref(Move* opp) {
    if (opp->getName() == "Ninja" || opp->getName() == "Robot") { // won
        return 0;
    } else if (opp->getName() == "Monkey") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}