#include "Human.h"

Human:: Human(): Human("Human") {}
Human::Human(string name) {
    this->name = name;
}
char Human::makeMove() {
    char move;
    cout << "Enter move:";
    cin >> move;

    return move;
}

