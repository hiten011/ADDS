#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> arr, int find) { 
    return helper(arr, find, 0, arr.size());
}

bool RecursiveBinarySearch::helper(vector<int> arr, int find, int start, int end) { 
    if (start >= end) {
        return false;
    }

    int mid = (start + end) / 2;
    if (arr[mid] == find) return true;
    else if (arr[mid] > find) return helper(arr, find, start, mid);
    else return helper(arr, find, mid + 1, end);
}