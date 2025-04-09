#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class QuickSort: public Sort {
    public:
        vector<int> sort(vector<int> list); 

    private: 
        vector<int> list;

        // recursion apprach
        void recursion(int start, int end); // TC: O(n^2) on Average: O(nlogn)  SC: log(n)

        // without recursion
        void loop();

        // helper function for Pivot Sort
        int helper(int pivot, int ptr, int start, int end);
};

#endif
