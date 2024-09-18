#include <iostream>
#include <sstream>

using std::cin, std::cout, std::endl, std::string;

int main() {
    // demo pre-decrement and post-decrement
    int i = 4;
    int k = 2*++i;
    int l = 2*i++;
    cout << "k: " << k << endl;
    cout << "l: " << l << endl;
}