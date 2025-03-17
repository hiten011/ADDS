#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    
    if (dp.count(numCrates)) {
        return dp[numCrates];
    }
    
    int ans = numTrucks(numCrates / 2, loadSize) +  numTrucks(round(numCrates / 2.0), loadSize);
    dp.insert({numCrates, ans});
    return ans;
}