#include "Human.h"

Human:: Human(): Human("Human") {}
Human::Human(string name): Player(name) {}
Move* Human::makeMove() {
    return new Rock();
}

