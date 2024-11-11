#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

void printArray(string label, const DynamicIntArray& ary);

int main() {
  // declare/define instance
  DynamicIntArray a;
  printArray("a", a);

  DynamicIntArray b(3, 7);
  printArray("b", b);

  DynamicIntArray c(5);
  printArray("c", c);

  c.at(2) = 2;
  c[0] = 9;

  printArray("c", c);


  a.push_back(1);
  printArray("a", a);

  a.push_back(3);
  printArray("a", a);

  DynamicIntArray d(b);

  printArray("d", d);

  a = d;

  printArray("a",a);

  a.at(a.size() -1) = 11;

  printArray("d",d);
  printArray("a", a);
}

void printArray(string label, const DynamicIntArray& ary) {
  cout << label << endl;
  for (size_t i=0; i<ary.size(); ++i) {
    cout << ary.at(i) << endl;
  }
}