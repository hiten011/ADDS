#include "Human.h"

Human:: Human(): Human("Human") {}
Human::Human(string name): Player(name) {}

Move* Human:: makeMove() {
    string move_s;
    cout << "Enter Move: ";
    cin >> move_s;

    Move* move;

    if (move_s == "Paper") {
        move = new Paper();
    } else if (move_s == "Rock") {
        move  = new Rock();
    } else if (move_s == "Scissors") {
        move  = new Scissors();
    } else if (move_s == "Robot") {
        move  = new Robot();
    } else if (move_s == "Zombie") {
        move  = new Zombie();
    } else if (move_s == "Pirate") {
        move  = new Pirate();
    } else if (move_s == "Monkey") {
        move  = new Monkey();
    } else if (move_s == "Ninja") {
        move  = new Ninja();
    } else {
        move = nullptr;
    }

    return move;
};
