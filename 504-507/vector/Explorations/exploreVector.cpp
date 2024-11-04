#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

int main() {
  // 1D vector

  // create a vector of ints
  vector<int*> vi;
  cout << "starting capacity: " << vi.capacity() << endl;

  // explore capacity
  //  loop through vector adding one item from the heap at a time
  //  show the capacity after each push back
  for (size_t i=0; i<10; ++i) {
    vi.push_back(new int(i+1));
    cout << "capacity at index " << i << ": " << vi.capacity() << endl;
  }

  // print out each item
  for (size_t i=0; i<vi.size(); ++i) {
    cout << "value at index " << i << ": " << *vi.at(i) << endl;
//    cout << "value at index " << i << ": " << *vi[i] << endl;    
  }

  // do garbage collection to avoid memory leak
  while (!vi.empty()) {
    delete vi.at(0);
    vi.erase(vi.begin());
  }

  // ****************************************
  // 2d vector

  // create a 2d vector of double

  // load and initialize with values starting with temp *= 1.2
  double temp = 1;

  // print out values

  // create 2d array of char
  //  4 rows, 3 cols, all initialized to 'a'

  // print out chars

  // create 2d array of int with different number of columns
  //  5 rows, cols on row is row index plus 1

  // print out chars
  //  how to know how many cols to loop through?
}