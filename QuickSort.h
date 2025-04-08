#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <iostream>
#include <vector>

using namespace std;

class QuickSort: public Sort {
    public:
        vector<int> sort(vector<int> list); // TC: O(n^2) on Average: O(nlogn)  SC: log(n)

    private: 
        void helper(int start, int end);
        vector<int> list;
};

#endif
