#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    // declare/define array with 5 elements
    int ary[5] = {1, 2, 3, 4, 5};
    // initialize with loop (traditional) - do first (includes traversal)
    /*for (unsigned int i=0; i<5; ++i) {
        ary[i] = i + 1;
    }*/
    // initialize with braces (modern) - do second
    //   one with each element a different value
    //   one where each value has the same value
    // int ary[5] {3};
    // print values from array (includes traversal)
    for (unsigned int i=0; i<5; ++i) {
        cout << ary[i] << endl;
    }
    cout << endl;
}