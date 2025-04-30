#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"
#include "BigNumCalc.h"
#include <list>

using namespace std;

int main() {
	BigNumCalc bnc;
	list<int> f = bnc.buildBigNum("111111");
	list<int> r = bnc.buildBigNum("2");
	
	list<int> l = bnc.sub(r, f);
	for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << endl;
    }
}