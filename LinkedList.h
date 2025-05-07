#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <vector>

using namespace std;

class LinkedList {
    private:
        Node* head;
    
    public: 
        LinkedList();
        LinkedList(vector<int> arr); //check

        void removeFront(); // Check
        void removeMiddle(); // Check
        void removeLast(); // Check
        void removeNthEnd(int index); // check
        void removeIndex(int index); // check
        void remove(int num); // check

        void swapValues(int i, int j); //check
        void swapNode(int i, int j);

        void removeDuplicate(); // sorted LinkedList

        void print(); // check

        ~LinkedList();
};

#endif