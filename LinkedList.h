#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
#include <limits>
#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        LinkedList(int* array, int len);

        void insertPosition(int pos, int newNum);
        void insertFront(int newNum);
        void insertLast(Node* tail, int newNum);
        bool deletePosition(int pos);

        int get(int pos);
        int search(int target);
        void printList();

        ~LinkedList();

    private: 
        Node* head;
};

#endif