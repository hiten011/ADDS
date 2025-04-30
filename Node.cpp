#include "Node.h"

Node::Node():Node(0, nullptr) {}

Node::Node(int data):Node(data, nullptr) {}

Node::~Node() {
    if (this->link != nullptr) {
        this->link->~Node();
        this->link = nullptr;
    }
}

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}
