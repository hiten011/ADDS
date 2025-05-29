#include "docInfoNode.h"

docInfoNode::docInfoNode(): docInfoNode("", 0) {}

docInfoNode::docInfoNode(string name, int licence_limit)
    : name(name), licence_limit(licence_limit), current_holders(0) {}

bool docInfoNode::borrowDoc() { 
    if (current_holders == licence_limit) return false;

    current_holders++;
    return true;
}

bool docInfoNode::returnDoc() { 
    if (!current_holders) return false;

    current_holders--;
    return true;
}
