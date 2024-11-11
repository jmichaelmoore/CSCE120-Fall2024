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

int DynamicIntArray::operator[](size_t index) const {
    return ary[index];
}

int& DynamicIntArray::operator[](size_t index) {
    return ary[index];
}

void DynamicIntArray::push_back(int val) {
    if (size_ == capacity_) {
        increaseCapacity();
    }
    ary[size_] = val;
    ++size_;
}

DynamicIntArray::~DynamicIntArray() {
    delete [] ary;
    size_ = 0;
    capacity_ = 0;
}

void DynamicIntArray::copySource(const DynamicIntArray& src) {
    ary = new int[src.capacity_];
    for (size_t i=0; i<size_; ++i) {
        ary[i] = src.ary[i];
    }
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray& src) :
        ary(nullptr), size_(src.size_), 
        capacity_(src.capacity_) {
    copySource(src);
}

DynamicIntArray& DynamicIntArray::operator=(const DynamicIntArray& src) {
    if (this != &src) {
        delete [] ary;
        size_ = src.size_;
        capacity_ = src.capacity_;
        copySource(src);
    }
    return *this;
}

void DynamicIntArray::swap(DynamicIntArray& rhs) { // efficient
    int* temp = this->ary;
    this->ary = rhs.ary;
    rhs.ary = temp;
}