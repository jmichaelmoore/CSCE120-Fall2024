#include <iostream>

using std::cin, std::cout, std::endl;

void z() {
    cout << "start z" << endl;
    // just for fun (odd number)
    // throw int
}

void y() {
    cout << "start y" << endl;
    // just for fun (even number)
    // throw int
} 

int main() {
    cout << "start main" << endl;
    cout << "enter version a or b: ";
    char version = 'c';
    cin >> version;
    y();
    z();
    cout << "end main" << endl;
}