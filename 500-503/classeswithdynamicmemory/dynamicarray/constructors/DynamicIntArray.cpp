#include "DynamicIntArray.h"
#include <stdexcept>

void DynamicIntArray::increaseCapacity(size_t capacity) {
    if (ary == nullptr) {
        this->capacity_ = capacity;
        ary = new int[this->capacity_];
    }
    else {
        this->capacity_ *= 2;
        int* temp = new int[this->capacity_];
        for (size_t i = 0; i<size_; ++i) {
            temp[i] = ary[i];
        }
        delete [] ary;
        ary = temp;
    }
}

DynamicIntArray::DynamicIntArray(size_t size, char initVal) :
        ary(nullptr), size_(size), capacity_(size) {
    increaseCapacity(size_);
    for (size_t i=0; i<size_; ++i) {
        ary[i] = initVal;

    }
}

int DynamicIntArray::at(size_t index) const {
    if (index >= size_) {
        throw std::out_of_range("index out of range");
    }
    return ary[index];
}

int& DynamicIntArray::at(size_t index) {
    if (index >= size_) {
        throw std::out_of_range("index out of range");
    }
    return ary[index];
}