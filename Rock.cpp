#include "Rock.h"

Rock::Rock(): Move("Rock") {}

int Rock::ref(Move* opp) {
    if (opp.getName() == "Rock") {
        return 1;
    }
}