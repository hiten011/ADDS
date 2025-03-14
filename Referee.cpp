#include "Referee.h"

Referee::Referee() {}
Player* Referee::refGame(Player * p1, Player * p2) {
    Move t = p1->makeMove();
    char h = p2->makeMove();
}