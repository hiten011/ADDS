#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
using namespace std;

int main() {
    Reverser* r = new Reverser();
    cout << r->reverseString("1256") << endl;
}