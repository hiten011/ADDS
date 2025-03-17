#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    
    return numTrucks(numCrates / 2, loadSize) +  numTrucks(round(numCrates / 2.0), loadSize);
}