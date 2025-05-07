#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    private:
        Node* head;
    
    public: 
        LinkedList();

        void removeFront();
        void removeLast();
        void removeIndex(int index);

        ~LinkedList();
};

#endif