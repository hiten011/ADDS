#include "Referee.h"
#include "Move.h"

Referee::Referee() {}
Player* Referee::refGame(Player* p1, Player* p2) {
    Move* move1 = p1->makeMove();
    Move* move2 = p2->makeMove();

    int whoWon = move1->ref(move2);

    if (whoWon == 0) { // p1 won
        return p1;
    } else if (whoWon == 1) { // tie
        return nullptr;
    } else {
        return p2;
    }
}