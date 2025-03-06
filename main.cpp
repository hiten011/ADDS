#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main() {
    Human *p1 = new Human("Hiten");
    Human *p2 = new Human("Joe");

    Referee r = Referee();
    cout << r.refGame(p1, p2)->getName();
    return 0;
}