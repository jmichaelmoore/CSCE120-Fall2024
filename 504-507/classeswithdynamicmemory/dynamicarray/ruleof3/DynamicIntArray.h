#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include<iostream>

class DynamicIntArray {
    int* ary;
    size_t size_;
    size_t capacity_;
    void increaseCapacity(size_t capacity = 1);
    void copy_(const DynamicIntArray& src);
public:
    // constructors
    DynamicIntArray() : ary(nullptr), size_(0), capacity_(0) {}
    DynamicIntArray(size_t size, int initVal = 0);
    DynamicIntArray(const DynamicIntArray& src);
    // destructor
    ~DynamicIntArray();
    // capacity methods
    size_t size() const { return size_; }
    size_t capacity() const { return capacity_; }
    bool empty() const;
    // getters & setters
    int at(size_t index) const;
    int& at(size_t index);
    int operator[](size_t index) const;
    int& operator[](size_t index);
    void push_back(int val);
    DynamicIntArray& operator=(const DynamicIntArray& src);
    void swap(DynamicIntArray& rhs);
};

#endif