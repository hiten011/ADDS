// main.cpp
#include <iostream>
#include <vector>
#include "Heap.hpp"   // your template implementation

int main() {
    // 1) Test default‐constructed heap & insert
    Heap<int> h;
    std::cout << "Inserting: ";
    for (int v : {5, 3, 8, 1, 2}) {
        std::cout << v << " ";
        h.insert(v);
    }
    std::cout << "\nHeap after inserts: ";
    h.printHeap();

    // 2) Test getMin()
    std::cout << "Current min: " << h.getMin() << "\n";

    // 3) Test popTop()
    std::cout << "Popped top: " << h.popTop() << "\n";
    std::cout << "Heap now: ";
    h.printHeap();

    // 4) Test remove(value)
    int toRemove = 3;
    std::cout << "Removing value " << toRemove << "\n";
    h.remove(toRemove);
    std::cout << "Heap now: ";
    h.printHeap();

    // 5) Test heapSort()
    std::vector<int> arr = {4, 7, 6, 9, 0};
    std::cout << "Heap‐sorting {4,7,6,9,0}:\n";
    auto sorted = h.heapSort(arr);
    std::cout << "Sorted result: ";
    for (int x : sorted) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
