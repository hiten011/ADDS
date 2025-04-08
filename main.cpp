#include "BubbleSort.h"

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(10);
    arr.push_back(100);
    arr.push_back(3);

    BubbleSort* bs = new BubbleSort;
    arr = bs->sort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
}