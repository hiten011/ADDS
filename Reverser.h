#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
using namespace std;

class Reverser {
    private:
        int numDigit;
    public:
        int reverseDigit(int value) {
            if (value == 0) {
                numDigit = 0;
                return 0;
            }

            int d = value % 10;
            return reverseDigit(value / 10) + (d * pow(10, numDigit++));
        }

        string reverseString(string characters) {
            if (characters.empty()) {
                return "";
            }

            char c = characters.back();
            characters.erase(characters.size() - 1); 
            return c + reverseString(characters);
        }
};

#endif