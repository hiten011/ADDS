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
	list<int> f = bnc.buildBigNum("99");
	list<int> r = bnc.buildBigNum("2");
	
	list<int> l = bnc.mul(f, r);
	for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << endl;
    }
}