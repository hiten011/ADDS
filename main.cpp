#include "Heap.hpp"
using namespace std;

int main() {
  Heap<int> pq;
  pq.printHeap();

  // add element
  pq.insert(2);
  pq.printHeap();

  // add another element
  pq.insert(1);
  pq.printHeap();

  // remove element
  pq.remove(1);
  pq.printHeap();

  return 0;
}