#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    friend class LinkedList;

    public:
        Node();
        Node(int data, Node* link);
        Node(int data);

        ~Node();

    private: 
        int data;
        Node* link;
};

#endif