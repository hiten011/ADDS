#ifndef documentmanager_h
#define documentmanager_h

#include <bits/stdc++.h>
#include "docInfoNode.h"
using namespace std;

class DocumentManager {
    private:
        unordered_map<int, unordered_set<int>> patrons; // key: [patron_id], value: set of [doc_id: borrowed]
        unordered_map<int, docInfoNode> docInfo; // key: [doc_id], value: [doc Information]
        unordered_map<string, int> docId; // key: [name], value: [docId]

    public:
        DocumentManager(); // constructor

        void addDocument(string name, int id, int license_limit);

        void addPatron(int patronID);

        int search(string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

        bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

        void returnDocument(int docid, int patronID);
};

#endif