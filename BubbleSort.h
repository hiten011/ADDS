#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <iostream>
#include <vector>

using namespace std;

class BubbleSort: public Sort {
    public:
        vector<int> sort(vector<int> list); // TC: O(N^2) SC: O(1)
};

#endif
