#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;

    double largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    cout << "largest: " << largest << endl;
}