#include <iostream>
#include <stdexcept>

using std::cout, std::cin, std::endl;

double max(double*, unsigned int);
void printAry(double[], unsigned int);

int main() {
  cout << "How many values will you enter?";
  unsigned int size = 0;
  cin >> size;
  if (cin.fail() || size == 0) {
    cout << "You must enter a valid size greater than zero." << endl;
    return 1; // empty array so nothing to read into
  }
  
  // define pointer to appropriate datatype (double)
  // allocate memory for the array with "new"
  // call it ary so it works with the pre-written code
  double* ary = new double[size] {7, 5, 9};

  // 1) initialize using loop
  // for (unsigned int i=0; i<size; ++i) {
  //   ary[i] = 3;
  // }

  // 2) update to initialize using curly braces when creating array

  // print intialized array to see initialized values
  printAry(ary, size);

  // use the array - same as using an array on the heap
  for (unsigned int i=0; i<size; ++i) {
    cin >> ary[i]; // do this
    //cin >> *(ary + i); // don't do this
    //cin >> i[ary]; // don't do this
    if (cin.fail()) {
      cout << "failed to get integer value for index " << i << endl;
      return 1;
    }
  }

  try {
    cout << "The max is: " << max(ary, size) << endl; // add call to max
  }
  catch (std::invalid_argument &e) {
    cout << e.what() << endl;
  }
  cout << "Numbers: " << endl;
  printAry(ary, size);
  cout << endl;

  // release memory for the array with "delete[]"
  // set ary to point to nullptr to avoid dangling pointer
  delete[] ary;
  cout << ary[0] << endl;
  ary = nullptr;
}

double max(double* nums, unsigned int size) {
  if (size == 0) {
    throw std::invalid_argument("Cannot find max for an empty array");
  }
  double max = nums[0];
  for (unsigned int i=1; i<size; ++i) { // start at 1 since index 0 already addressed
    if (nums[i] > max) {
      max = nums[i];
    }
  }
  return max;
}

void printAry(double nums[], unsigned int size) {
  if (size == 0) {
    cout << endl;
    return;
  }
  for (unsigned int i=0; i<size; ++i) {
    cout << nums[i] << " ";
    if ((i+1)%5 == 0) { // why do I use i+1
      cout << endl;
    }
  }  
  cout << endl;
}
