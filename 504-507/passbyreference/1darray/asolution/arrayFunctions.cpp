#include <iostream>
#include "arrayFunctions.h"

using std::cin, std::cout, std::endl;

// these are definitions

void loadRandom(int ary[], unsigned int size) {
    if (size > CAPACITY) {
        throw std::out_of_range("size is too big");
    }
/*    if (size > CAPACITY) {
        size = CAPACITY;
    }*/
    for (unsigned int i=0; i<size; ++i) {
        ary[i] = rand()%1000;
    }
}

void insert(int ary[], unsigned int& size, int val, unsigned int index) {
    if (index > size) {
        throw std::out_of_range("index must be in the string");
    }
//    if (index > size) {
//        index = size;
//    }
    if (size == CAPACITY) {
        throw std::out_of_range("no space to add another value");
    }
    for (unsigned int i=0; i < size - index; ++i) {
        ary[size-1 - i + 1] = ary[size-1 - i];
    }
    ary[index] = val;
    size++;
}

int getMax(const int ary[], unsigned int size) {
    if (size == 0) {
        return 0;
    }
    int max = ary[0];
    for (unsigned int i=1; i<size; ++i) {
        if (ary[i] > max) {
            max = ary[i];
        }
    }
    return max;
}

void print(const int ary[], unsigned int size) {
    for (unsigned int i=0; i<size; ++i) {
        cout << ary[i] << endl;
    }
    if (size == 0) {
        cout << "size is 0, no elements" << endl;
    }
}