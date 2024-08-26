#include <iostream>
#include "arrayFunctions.h"

using std::cin, std::cout, std::endl;

void loadRandom(int ary[], unsigned int size) {
    for (unsigned int i=0; i<size; ++i) {
        ary[i] = rand()%1000;
    }
}

void insert(int ary[], unsigned int size, int val, unsigned int index) {
    if (index > size) {
        index = size;
    }
    
}

void print(const int ary[], unsigned int size) {
    for (unsigned int i=0; i<size; ++i) {
        cout << ary[i] << endl;
    }
    if (size == 0) {
        cout << "empty array" << endl;
    }
}