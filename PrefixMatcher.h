#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "TriNode.h"

class PrefixMatcher {
    public:
        PrefixMatcher();

        int selectRouter(string networkAddress);  // return the router with the longest matching prefix
        void insert(string address, int routerNumber); // add a router address

        ~PrefixMatcher();

    private: 
        TriNode* root;
};

#endif