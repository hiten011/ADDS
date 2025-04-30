#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(void) {
    int* arr = new int[15];
    for (int i = 0; i < 15; i++) {
        arr[i] = i + 1;
    }

	LinkedList ll(arr, 15);
    
    ll.deletePosition(16);
    ll.printList();
}