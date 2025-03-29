#include "Finder.h"
#include "iostream"
using namespace std;

int main() {
    Finder* obj = new Finder();
    vector<int> result = obj->findSubstrings("HelloW World, Hello ", "World");
    for (int i : result) {
        cout << i << " ";
    }
}