#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {}

list<int> BigNumCalc::buildBigNum(string numString) {
    list<int> head;
    for (char c : numString) {
        head.push_back((int) (c - '0'));
    }

    return head;
};

list<int> BigNumCalc::add(std::list<int> num1, list<int> num2) {
    list<int> head;
    
    auto irr1 = num1.rbegin();
    auto irr2 = num2.rbegin();
    int carry = 0;

    while (irr1 != num1.rend() && irr2 != num2.rend()) {
        carry += *irr1 + *irr2;
        // cout << carry << endl;
        
        int temp = carry % 10;
        carry /= 10;

        head.push_front(temp);

        irr1++;
        irr2++;
    }

    while (irr1 != num1.rend()) {
        carry += *irr1;
        int temp = carry % 10;
        carry /= 10;

        head.push_front(temp);

        irr1++;
    }

    while (irr2 != num2.rend()) {
        carry += *irr2;
        int temp = carry % 10;
        carry /= 10;

        head.push_front(temp);

        irr2++;
    }

    if (carry != 0) {
        head.push_front(carry);
    }

    return head;
};

list<int> BigNumCalc::sub(std::list<int> num2, list<int> num1) {
    list<int> head;
    
    auto irr1 = num1.rbegin();
    auto irr2 = num2.rbegin();
    int carry = 0;

    while (irr1 != num1.rend() && irr2 != num2.rend()) {
        int temp = (*irr2 - *irr1) + carry;
        
        if (temp >= 0) {
            head.push_front(temp);
            carry = 0;
        } else {
            head.push_front(10 + temp);
            carry = -1;
        }

        irr1++;
        irr2++;
    }

    while (irr1 != num1.rend()) {
        carry += *irr1;

        head.push_front(carry);
        carry = 0;

        irr1++;
    }

    while (irr2 != num2.rend()) {
        carry += *irr2;

        head.push_front(carry);
        carry = 0;

        irr2++;
    }

    return head;
};

list<int> BigNumCalc::mul(std::list<int> num1, list<int> num2) {
    list<int> head;
    
    auto irr1 = num1.rbegin();
    auto irr2 = num2.rbegin();
    int carry = 0;

    while (irr1 != num1.rend()) {
        int temp = (*irr1 * *irr2);
        carry += temp;

        head.push_front(carry % 10);
        carry /= 10;

        irr1++;
    }

    if (carry != 0) {
        head.push_front(carry);
    }

    return head;
};

BigNumCalc::~BigNumCalc() {}
