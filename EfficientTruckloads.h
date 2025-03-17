#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

class EfficientTruckloads {
    private:
        unordered_map<int, int> dp;
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif