#include "TriNode.h"

TriNode::TriNode(): isEnd(false), children(26, nullptr) {}

TriNode::~TriNode() {
    for (int i = 0; i < 26; i++) {
        if (this->children[i] == nullptr) continue;

        delete this->children[i];
        this->children[i] = nullptr;
    }
}
