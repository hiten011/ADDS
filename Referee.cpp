#include "Referee.h"

Referee::Referee() {}
Player* Referee::refGame(Player * p1, Player * p2) {
    char t = p1->makeMove();
    char h = p2->makeMove();

    if (t == h) {
        cout << "It's a Tie";
        return nullptr;
    } else if (t == 'R' && h == 'S' || t == 'P' && h == 'R' || t == 'S' && t == 'P') {
        return p1;
    } else {
        return p2;
    }
}