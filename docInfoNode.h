#ifndef docInfoNode_H
#define docInfoNode_H

#include <bits/stdc++.h>
using namespace std;

class docInfoNode {
    private:
        string name;
        int licence_limit, current_holders;

    public:
        docInfoNode();
        docInfoNode(string name, int licence_limit);

        bool borrowDoc();
        bool returnDoc();

    friend class DocumentManager;
};

#endif