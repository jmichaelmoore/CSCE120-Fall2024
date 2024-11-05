#include "DynamicIntArray.h"

void DynamicIntArray::increaseCapacity(size_t capacity = 1) {
    if (ary == nullptr) {
        this->capacity = capacity;
        ary = new int[this->capacity];
    }
    else {
        this->capacity *= 2;
        int* temp = new int[this->capacity];
        for (size_t i = 0; i<size; ++i) {
            temp[i] = ary[i];
        }
        delete [] ary;
        ary = temp;
    }
}
