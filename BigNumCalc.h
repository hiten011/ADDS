#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <iostream>
#include "LinkedList.h"
#include <list>

using namespace std;

class BigNumCalc {
    public:
        BigNumCalc();

        list<int> buildBigNum(std::string numString);
        list<int> add(std::list<int> num1, list<int> num2);
        list<int> sub(std::list<int> num1, list<int> num2);
        list<int> mul(std::list<int> num1, list<int> num2);

        ~BigNumCalc();

    private: 
};

#endif