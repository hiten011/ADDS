#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

void LinkedList::removeFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
}

void LinkedList::removeLast() {
    if (head == nullptr) {
        return;
    }

    Node* temp = new Node(-1, head);
    head = temp;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    Node* rem = temp->next;
    delete rem;

    temp->next = nullptr;
    head = head->next;
}

void LinkedList::removeIndex(int index) {
    if (head == nullptr || index < 0) return;
    if (index == 0) {
        removeFront();
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
        if (temp == nullptr || temp->next == nullptr) return;
    }

    Node* rem = temp->next;
    temp->next = temp->next->next;

    delete rem;
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head->next;
        delete head;

        head = temp;
    }
}
