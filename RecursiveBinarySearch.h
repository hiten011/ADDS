#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include <vector>

using namespace std;

class RecursiveBinarySearch {
 public:
  bool search(vector<int> arr, int find); // TC: O(logN) SC: (logN)

  private:
    bool helper(vector<int> arr, int find, int start, int end);
};

#endif
