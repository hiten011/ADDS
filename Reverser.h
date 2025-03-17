#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Reverser {
    private:
        int numDigit;
    public:
        int reverseDigit(int value);
        string reverseString(string characters);
};

#endif