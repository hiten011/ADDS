#include "Autocomplete.h"

Autocomplete::Autocomplete(): root(new TriNode()) {}

vector<string> Autocomplete::getSuggestions(string partialWord) {
    vector<string> ans;
    TriNode* cur = root;
    for (auto c : partialWord) {
        int index = (int) c - 'a';
        if (cur->children[index] == nullptr) {
            return ans;
        }

        cur = cur->children[index];
    }

    getSuggestionsHelper(cur, "", ans);
    return ans;
}

void Autocomplete::getSuggestionsHelper(TriNode* cur, string str, vector<string>& ans) {
    if (cur->isEnd == true) {
        ans.push_back(str);
    }

    for (int i = 0; i < 26; i++) {
        TriNode* temp = cur->children[i];
        if (temp == nullptr) continue;
        
        getSuggestionsHelper(temp, str + (char)(i + 'a'), ans);
    }
}

void Autocomplete::insert(string word) {
    TriNode* cur = root;
    for (auto c : word) {
        int index = (int) c - 'a';
        if (cur->children[index] == nullptr) {
            cur->children[index] = new TriNode();
        }

        cur = cur->children[index];
    }

    cur->isEnd = true;
}

Autocomplete::~Autocomplete() {
    delete this->root;
}
