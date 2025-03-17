#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

class Truckloads {
    private:
        unordered_map<int, int> dp;
    public:
        int numTrucks(int numCrates, int loadSize) {
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
};

#endif