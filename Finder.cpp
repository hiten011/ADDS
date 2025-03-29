#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result; // vector to store result
    
    // main loop: O(n + m)
    int index = 1;
    size_t found = s1.find(s2.substr(0, index));
    while (found != string::npos) { // TC: O(n)
        for (int i = index - 1; i < s2.length(); i++) { 
            if (found + 1 < s1.length() && s2.at(i) == s1.at(found + i)) {
                result.push_back(found);
            } else {
                index = i + 1;
                break;
            }
        }

        found = s1.find(s2.substr(0, index), found + 1); // TC: O(n)
    }
    
    // remaing result stores as -1: O(m)
    for (int i = result.size(); i < s2.length(); i++) {
        result.push_back(-1);
    }

    // Final Time Complexity: O(n + m)

    return result;
}