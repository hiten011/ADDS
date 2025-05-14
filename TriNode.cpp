#include "TriNode.h"

TriNode::TriNode(): TriNode(26) {}

TriNode::TriNode(int numChildren): isEnd(false), children(numChildren, nullptr), routerNumber(-1) {}

TriNode::~TriNode() {
    for (int i = 0; i < this->children.size(); i++) {
        if (this->children[i] == nullptr) continue;

        delete this->children[i];
        this->children[i] = nullptr;
    }
}
