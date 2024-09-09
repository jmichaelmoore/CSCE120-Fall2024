#include <iostream>
using std::cin, std::cout, std::endl;

void processLinear(double b, double c) {
    if (b==0) {
        if (c==0) {
            cout << "tautology" << endl;
        }
        else {
            cout << "invalid equation" << endl;
        }
    }
    else {
        double x = -c/b;
        cout << "x = " << x << endl;
    }
}

void echoEquation(double a, double b, double c) {
    if (a!=0) {
        cout << a << "x^2";
    }
    if (b!=0) {
        if (a!=0) {
            cout << " + ";
        }
        cout << b << "x";
    }
    if (c!=0) {
        if (a != 0 || b != 0) {
            cout << " + ";
        }
        cout << c;
    }
    cout << " = 0" << endl;
}

int main() {
    double a, b, c;
    cout << "enter coefficients a, b, & c: ";
    cin >> a >> b >> c;
    echoEquation(a, b, c);
    if (a==0) {
        processLinear(b, c);
    }
    else {
        //processQuadratic(a, b, c);
    }
}