#include "Player.h"

Player::Player() {}
Player::Player(string name) {
    this.name = name;
}

string Player::getName() {
    return name;
}