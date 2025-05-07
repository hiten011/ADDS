#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

void testLinkedList() {
    std::cout << "=== removeFront() ===\n";
    {
        LinkedList ll1(vector<int>{});
        std::cout << "Before: "; ll1.print();
        ll1.removeFront();
        std::cout << "After: "; ll1.print();

        LinkedList ll2({1});
        std::cout << "Before: "; ll2.print();
        ll2.removeFront();
        std::cout << "After: "; ll2.print();

        LinkedList ll3({1, 2, 3});
        std::cout << "Before: "; ll3.print();
        ll3.removeFront();
        std::cout << "After: "; ll3.print();
    }

    std::cout << "\n=== removeLast() ===\n";
    {
        LinkedList ll1(vector<int>{});
        std::cout << "Before: "; ll1.print();
        ll1.removeLast();
        std::cout << "After: "; ll1.print();

        LinkedList ll2({1});
        std::cout << "Before: "; ll2.print();
        ll2.removeLast();
        std::cout << "After: "; ll2.print();

        LinkedList ll3({1, 2, 3});
        std::cout << "Before: "; ll3.print();
        ll3.removeLast();
        std::cout << "After: "; ll3.print();
    }

    std::cout << "\n=== removeIndex(index) ===\n";
    {
        LinkedList ll1(vector<int>{});
        ll1.removeIndex(0); std::cout << "Empty removeIndex(0): "; ll1.print();

        LinkedList ll2({10});
        ll2.removeIndex(5); std::cout << "Single removeIndex(5): "; ll2.print();

        std::vector<int> base = {1, 2, 3, 4, 5};

        LinkedList ll3(base); std::cout << "index=-1 before: "; ll3.print(); ll3.removeIndex(-1); std::cout << "index=-1 after:  "; ll3.print();
        LinkedList ll4(base); std::cout << "index=0 before: "; ll4.print(); ll4.removeIndex(0);  std::cout << "index=0 after:  "; ll4.print();
        LinkedList ll5(base); std::cout << "index=2 before: "; ll5.print(); ll5.removeIndex(2);  std::cout << "index=2 after:  "; ll5.print();
        LinkedList ll6(base); std::cout << "index=4 before: "; ll6.print(); ll6.removeIndex(4);  std::cout << "index=4 after:  "; ll6.print();
        LinkedList ll7(base); std::cout << "index=5 before: "; ll7.print(); ll7.removeIndex(5);  std::cout << "index=5 after:  "; ll7.print();
    }

    std::cout << "\n=== remove(num) ===\n";
    {
        LinkedList ll1({1, 2, 3, 2, 4});
        std::cout << "val=2 before: "; ll1.print(); ll1.remove(2); std::cout << "val=2 after:  "; ll1.print();

        LinkedList ll2({1, 2, 3, 2, 4});
        std::cout << "val=5 before: "; ll2.print(); ll2.remove(5); std::cout << "val=5 after:  "; ll2.print();

        LinkedList ll3({1, 2, 3, 2, 4});
        std::cout << "val=1 before: "; ll3.print(); ll3.remove(1); std::cout << "val=1 after:  "; ll3.print();

        LinkedList ll4({1, 2, 3, 2, 4});
        std::cout << "val=4 before: "; ll4.print(); ll4.remove(4); std::cout << "val=4 after:  "; ll4.print();
    }

    std::cout << "\n=== swapValues(i,j) ===\n";
    {
        LinkedList ll1({10, 20, 30, 40, 50});
        std::cout << "swapValues(0,4) before: "; ll1.print(); ll1.swapValues(0, 4); std::cout << "swapValues(0,4) after:  "; ll1.print();

        LinkedList ll2({10, 20, 30, 40, 50});
        std::cout << "swapValues(1,3) before: "; ll2.print(); ll2.swapValues(1, 3); std::cout << "swapValues(1,3) after:  "; ll2.print();

        LinkedList ll3({10, 20, 30, 40, 50});
        std::cout << "swapValues(2,2) before: "; ll3.print(); ll3.swapValues(2, 2); std::cout << "swapValues(2,2) after:  "; ll3.print();

        LinkedList ll4({10, 20, 30, 40, 50});
        std::cout << "swapValues(5,1) before: "; ll4.print(); ll4.swapValues(5, 1); std::cout << "swapValues(5,1) after:  "; ll4.print();
    }

    std::cout << "\n=== swapNode(i,j) ===\n";
    {
        LinkedList ll1({10, 20, 30, 40, 50});
        std::cout << "swapNode(0,4) before: "; ll1.print(); ll1.swapNode(0, 4); std::cout << "swapNode(0,4) after:  "; ll1.print();

        LinkedList ll2({10, 20, 30, 40, 50});
        std::cout << "swapNode(1,3) before: "; ll2.print(); ll2.swapNode(1, 3); std::cout << "swapNode(1,3) after:  "; ll2.print();

        LinkedList ll3({10, 20, 30, 40, 50});
        std::cout << "swapNode(2,2) before: "; ll3.print(); ll3.swapNode(2, 2); std::cout << "swapNode(2,2) after:  "; ll3.print();

        LinkedList ll4({10, 20, 30, 40, 50});
        std::cout << "swapNode(5,1) before: "; ll4.print(); ll4.swapNode(5, 1); std::cout << "swapNode(5,1) after:  "; ll4.print();
    }

    std::cout << "\n=== removeDuplicate() ===\n";
    {
        LinkedList ll1(vector<int>{});
        std::cout << "Before: "; ll1.print(); ll1.removeDuplicate(); std::cout << "After: "; ll1.print();

        LinkedList ll2({1});
        std::cout << "Before: "; ll2.print(); ll2.removeDuplicate(); std::cout << "After:  "; ll2.print();

        LinkedList ll3({1, 1, 1});
        std::cout << "Before: "; ll3.print(); ll3.removeDuplicate(); std::cout << "After:  "; ll3.print();

        LinkedList ll4({1, 2, 2, 3, 3, 3, 4});
        std::cout << "Before: "; ll4.print(); ll4.removeDuplicate(); std::cout << "After:  "; ll4.print();
    }

    std::cout << "\n=== removeMiddle() ===\n";
    {
        LinkedList ll1(vector<int>{});
        std::cout << "Before: "; ll1.print(); ll1.removeMiddle(); std::cout << "After: "; ll1.print();

        LinkedList ll2({1});
        std::cout << "Before: "; ll2.print(); ll2.removeMiddle(); std::cout << "After:  "; ll2.print();

        LinkedList ll3({1, 2});
        std::cout << "Before: "; ll3.print(); ll3.removeMiddle(); std::cout << "After:  "; ll3.print();

        LinkedList ll4({1, 2, 3});
        std::cout << "Before: "; ll4.print(); ll4.removeMiddle(); std::cout << "After:  "; ll4.print();

        LinkedList ll5({1, 2, 3, 4});
        std::cout << "Before: "; ll5.print(); ll5.removeMiddle(); std::cout << "After:  "; ll5.print();
    }

    std::cout << "\n=== removeNthEnd() ===\n";
    {
        LinkedList ll1({1, 2, 3, 4, 5});
        ll1.removeNthEnd(1); std::cout << "n=1 after: "; ll1.print();

        LinkedList ll2({1, 2, 3, 4, 5});
        ll2.removeNthEnd(3); std::cout << "n=3 after: "; ll2.print();

        LinkedList ll3({1, 2, 3, 4, 5});
        ll3.removeNthEnd(5); std::cout << "n=5 after: "; ll3.print();

        LinkedList ll4({1, 2, 3, 4, 5});
        ll4.removeNthEnd(6); std::cout << "n=6 after: "; ll4.print();
    }
}

int main() {
    testLinkedList();
    return 0;
}
