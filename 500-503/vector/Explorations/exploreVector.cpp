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
    //cout << "value at index " << i << ": " << *vi[i] << endl;
  }

  // do garbage collection to avoid memory leak
  while (!vi.empty()) {
    delete vi.at(0);
    vi.erase(vi.begin());
  }

  // ****************************************
  // 2d vector

  // create a 2d vector of double
  vector<vector<double>> dv(5,vector<double>(4, 1));

  // load and initialize with values starting with temp *= 1.2
  double temp = 1;
  for (size_t i=0; i<dv.size(); ++i) {
    for(size_t j=0; j<dv.at(i).size(); ++j) {
      temp *= 1.2;
      dv.at(i).at(j) = temp;
    }
  }

  // print out values
  for (size_t i=0; i<dv.size(); ++i) {
    for(size_t j=0; j<dv.at(i).size(); ++j) {
      cout << dv.at(i).at(j) << " ";
    }
    cout << endl;
  }

  // create 2d array of char
  //  4 rows, 3 cols, all initialized to 'a'
  // see int above but with char instead of int and 'a' instead of 1

  // print out chars

  // create 2d array of int with different number of columns
  //  5 rows, cols on row is row index plus 1

  vector<vector<char>> vi2(5);
  for (size_t i=0; i<vi2.size(); ++i) {
    vi2.at(i) = vector<char>(i+1,'a');
  }

  // print out chars
  //  how to know how many cols to loop through?
  for (size_t i=0; i<vi2.size(); ++i) {
    for (size_t j=0; j<vi2.at(i).size(); ++j) {
      cout << vi2.at(i).at(j);
    }
    cout << endl;
  }
}