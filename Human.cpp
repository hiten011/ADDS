#include "Human.h"

Human::Human(string name) {
    this->name = name;
}
char Human::makeMove() {
    char move;
    cout << this->name << " Enter move: ";
    cin >> move;

    return move;
}

