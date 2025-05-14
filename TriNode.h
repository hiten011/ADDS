#ifndef TRINODE_H
#define TRINODE_H

#include <bits/stdc++.h>
using namespace std;

class TriNode {
    public:
        TriNode();

        bool isEnd;
        vector<TriNode*> children;

        ~TriNode();
};

#endif