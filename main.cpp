#include <iostream>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"


int main() {
    Player* p1 = new Human("Joe");
    Player* p2 = new Human("Test");
    // Player* p2 = new Computer;

    Referee ref;

    Player* winner = ref.refGame(p1, p2);

    std:: cout << winner->getName() << " is winner";


    return 0;
};