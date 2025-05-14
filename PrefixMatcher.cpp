#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher(): root(new TriNode(2)) {}

int PrefixMatcher::selectRouter(string networkAddress) { 
    TriNode* cur = root;
    for (auto c : networkAddress) {
        int index = (int) c - '0';
        if (cur->children[index] == nullptr) {
            break;
        }

        cur = cur->children[index];
    }

    while (!cur->isEnd) {
        cur = (cur->children[0] == nullptr ? cur->children[1] : cur->children[0]);
    }

    return cur->routerNumber;
}

void PrefixMatcher::insert(string address, int routerNumber) {
  TriNode* cur = this->root;
  for (auto c : address) {
    int index = (int)c - '0';
    if (cur->children[index] == nullptr) {
      cur->children[index] = new TriNode(2);
    }

    cur = cur->children[index];
  }

  cur->isEnd = true;
  cur->routerNumber = routerNumber;
}

PrefixMatcher::~PrefixMatcher() { delete this->root; }
