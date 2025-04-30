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
	list<int> f = bnc.buildBigNum("9876543210");
	list<int> r = bnc.buildBigNum("1234567890");
	
	list<int> l = bnc.sub(f, r);
	for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << endl;
    }
}