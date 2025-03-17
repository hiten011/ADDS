#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>
#include <cmath>
using namespace std;

class Truckloads {
    public:
        int numTrucks(int numCrates, int loadSize) {
            if (numCrates <= loadSize) {
                return 1;
            }
            
            return numTrucks(numCrates / 2, loadSize) +  numTrucks(round(numCrates / 2.0), loadSize);
        }
};

#endif