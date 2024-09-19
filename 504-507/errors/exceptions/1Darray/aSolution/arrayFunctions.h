// header guards
#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

// this is a definition
const unsigned int CAPACITY = 100; // make largest size we will ever need

// functions to add
//   loadRandom
//   insert
//   remove at index
//   remove first of
//   getMax // linear search
//   getMin 
//   count val
//   print

// these are declarations
void loadRandom(int ary[], unsigned int size);
void insert(int ary[], unsigned int size, int val, unsigned int index);
int getMax(int ary[], unsigned int size);
void print(const int ary[], unsigned int size);

#endif