#include "function.h"

int sumOfDigits(int num) {
    bool neg = num < 0;
    int sum = 0;
    int ld = 0; // left digit
    int rd = 0; // right digit
    rd = num%10;
    num /= 10;
    while (num != 0) {
        ld = num%10;
        if (ld%2 == 0) { // even
            sum += rd;
        }
        else { //odd
            sum -= rd;
        }
        //sum += digit;
        num /= 10;
        rd = ld;
    }
    sum += rd;
    if (neg) {
        sum *= -1;
    }
    return sum;
}