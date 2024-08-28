#include <iostream>
#include "arrayFunctions.h"

using std::cin, std::cout, std::endl;

void loadRandom(int ary[], unsigned int size) {
    if (size > CAPACITY) {
        size = CAPACITY;
    }
    for (unsigned int i=0; i<size; ++i) {
        ary[i] = rand()%1000;
    }
}

void insert(int ary[], unsigned int size, int val, unsigned int index) {
    if (index > size) {
        index = size;
    }
    if (size == CAPACITY) {
        return;
    }
    for (unsigned int i=0; i < size - index; ++i) {
        ary[size-1-i + 1] = ary [size-1 - i];
    }
    ary[index] = val;
}

int getMax(const int ary[], unsigned int size) {
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
        cout << "empty array" << endl;
    }
}