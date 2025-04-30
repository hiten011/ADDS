#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    Node* temp = new Node(-1);
    this->head = temp;
    for (int i = 0; i < len; i++) {
        temp->link = new Node(array[i]);
        temp = temp->link;
    }

    this->head = this->head->link;
}

void LinkedList::insertPosition(int pos, int newNum) {
    // if position less than 2 insert in front or head is null
    if (pos <= 1 || this->head == nullptr) {
        insertFront(newNum);
        return;
    }
    
    // else run a loop
    Node* temp = this->head;
    for (int i = 2; i < pos; i++) {
        // if at some point we reach end of LL the insert at last
        if (temp->link == nullptr) {
            insertLast(temp, newNum);
            return;
        }

        temp = temp->link;
    }

    // Inserting node in between
    Node* temp2 = temp->link;
    temp->link = new Node(newNum, temp2);
}

void LinkedList::insertFront(int newNum) {
    Node* temp = new Node(newNum, this->head);
    this->head = temp;
}

void LinkedList::insertLast(Node* tail, int newNum) {
    tail->link = new Node(newNum);
}

int LinkedList::get(int pos) {
    if (pos < 1 || this->head == nullptr) {
        return std::numeric_limits<int>::max();
    } 

    Node* temp = this->head;
    for (int i = 2; i <= pos; i++) {
        if (temp->link == nullptr) {
            return std::numeric_limits<int>::max();
        }

        temp = temp->link;
    }

    return temp->data;
}

int LinkedList::search(int target) { 
    Node* temp = this->head;
    int index = 1;
    while (temp != nullptr) {
        if (temp->data == target) {
            return index;
        }

        index++;
        temp = temp->link;
    }

    return -1;
}

void LinkedList::printList() {
    Node* temp = this->head;
    while (temp != nullptr) {
        std::cout << '[' << temp->data << ']' << ' ';
        temp = temp->link;
    }

    std::cout << std::endl;
}

 LinkedList::~LinkedList() { head->~Node(); }
