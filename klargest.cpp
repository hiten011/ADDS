#include <bits/stdc++.h>
using namespace std;

int kth_largest(vector<int> values, int k) {
    priority_queue<int> pq(values.begin(), values.end());

    // getiing the kth largest
    while (!pq.empty() && --k > 0) {
        pq.pop();
    }

    return pq.top();
}