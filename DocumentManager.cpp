#include "DocumentManager.h"

DocumentManager::DocumentManager() {}

void DocumentManager::addDocument(string name, int id, int license_limit) {
    docInfoNode temp(name, license_limit);

    // add to docInfo
    docInfo[id] = temp;

    // add to docId
    docId[name] = id;
}

void DocumentManager::addPatron(int patronID) {
    patrons[patronID];
}

int DocumentManager::search(string name) {
    if (docId.count(name)) {
        return docId[name];
    }

    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    docInfoNode& cur = docInfo[docid];

    // check if patron exists
    if (!patrons.count(patronID)) {
        return false;
    }

    // check if it can be borrowed
    if (!cur.borrowDoc()) {
        return false;
    }

    // add the doc to patrons 
    patrons[patronID].insert(docid);

    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    docInfoNode& cur = docInfo[docid];

    if (!cur.returnDoc()) {
        return;
    }

    patrons[patronID].erase(docid);
}

