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
    cout << "starting insert" << endl;
    cout << "val: " << val << endl;
    cout << "index: " << index << endl;
    if (index > size) {
        cout << "got into if (index > size)" << endl;
        index = size;
    }
    if (size == CAPACITY) {
        cout << "size was Capacity so ending" << endl;
        return;
    }
    for (unsigned int i=0; i < size - index; ++i) {
        unsigned int leftIndex = size-1-i + 1;
        unsigned int rightIndex = size-1 - i;
        cout << "leftIndex: " << leftIndex << endl;
        cout << "rightIndex: " << rightIndex << endl;
        cout << "before assignment" << endl;
        cout << "value at leftIndex: " << ary[leftIndex] << endl;
        cout << "value at rightIndex: " << ary[rightIndex] << endl;
        ary[size-1-i + 1] = ary [size-1 - i];
        cout << "after assignment" << endl;
        cout << "value at leftIndex: " << ary[leftIndex] << endl;
        cout << "value at rightIndex: " << ary[rightIndex] << endl;
    }
    ary[index] = val;
    cout << "ending index function" << endl;
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