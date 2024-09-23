#include <iostream>
#include <limits>

using std::cout, std::endl, std::cin;

int main() {
  cout << "Enter an integer: ";
  int val;
  cin >> val;

  while(cin.fail()) { // any of the stream state bits is set
      cin.clear(); // set all stream state bits to zero, buffer NOT cleared
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      // clear the buffer of everything,
      //  i.e. remove bad data and make clean slate for input  

      cout << "Enter a valid integer: ";
      cin >> val;
  }

  cout << "You entered: " << val << endl;
}
