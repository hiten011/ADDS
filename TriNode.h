#ifndef TRINODE_H
#define TRINODE_H

#include <bits/stdc++.h>
using namespace std;

class TriNode {
    public:
        TriNode();
        TriNode(int numChildren); // number of children

        bool isEnd;
        int routerNumber;
        vector<TriNode*> children;

        ~TriNode();
};

#endif