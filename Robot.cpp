#include "Robot.h"

Robot::Robot(): Move("Robot") {}

int Robot::ref(Move* opp) {
    if (opp->getName() == "Ninja" || opp->getName() == "Zombie") { // won
        return 0;
    } else if (opp->getName() == "Robot") { // tie
        return 1;
    } else { // lose
        return 2;
    }
}