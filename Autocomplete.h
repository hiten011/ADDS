#ifndef Autocomplete_H
#define Autocomplete_H

#include "TriNode.h"

class Autocomplete {
    public:
        Autocomplete();

        vector<string> getSuggestions(string partialWord);  // return the known words that start with partialWord
        void insert(string word); // add a word to the known words

        ~Autocomplete();

    private: 
        TriNode* root;
        void getSuggestionsHelper(TriNode* cur, string str, vector<string> &ans);
};

#endif