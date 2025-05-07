#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include "LinkedList.h"

class Node {
    friend class LinkedList;

    int data;
    Node* next;

    public:
        Node();
        Node(int data);
        Node(int data, Node* next);
};

#endif