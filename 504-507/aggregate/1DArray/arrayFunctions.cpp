#include <iostream>
#include "arrayFunctions.h"

using std::cin, std::cout, std::endl;

// these are definitions

void loadRandom(int ary[], unsigned int size) {
    if (size > CAPACITY) {
        size = CAPACITY;
    }
    for (unsigned int i=0; i<size; ++i) {
        ary[i] = rand()%1000;
    }
}

void insert(int ary[], unsigned int size, int val, unsigned int index) {
}

void print(const int ary[], unsigned int size) {
    for (unsigned int i=0; i<size; ++i) {
        cout << ary[i] << endl;
    }
    if (size == 0) {
        cout << "size is 0, no elements" << endl;
    }
}