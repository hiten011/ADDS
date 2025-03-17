#include <iostream>
#include "Truckloads.h"
using namespace std;

int main() {
    Truckloads* t = new Truckloads();
    cout << t->numTrucks(1024, 5) << endl;
}