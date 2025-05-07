#include "Node.h"

Node::Node(): Node(-1, nullptr) {}

Node::Node(int data): Node(data, nullptr) {}

Node::Node(int data, Node* next) {
    this->data = data;
    this->next = next;
}
