#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    // taking input
    string line;
    getline(cin, line);
    stringstream ss(line);
    
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    // Sorting arr
    QuickSort* bs = new QuickSort;
    arr = bs->sort(arr);

    // Searching 1
    RecursiveBinarySearch* rbs = new RecursiveBinarySearch;
    string ans = (rbs->search(arr, 1) == 0) ? "False" : "True";
    cout << ans << " ";

    // printing array
    for (int i : arr) {
        cout << i << " ";
    }
    cout << " " << endl;
}