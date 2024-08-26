#include <iostream>
#include "function.h"

using std::cin, std::cout, std::endl;

int main() {
    int val = 0;
    cin >> val;
    cout << sumOfDigits(val) << endl;
}