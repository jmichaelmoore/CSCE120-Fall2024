#include <iostream>
#include <cmath>
using std::cin, std::cout, std::endl;

void processImaginary(double disc, double a, double b, double c) {
    disc = fabs(disc);
    double xa = -b/(2*a);
    double xb = sqrt(disc)/(2*a);
    cout << "x = " << xa << " + " << xb << "i" << endl;
    double ckr1 = a*xa*xa - a*xb*xb + b*xa + c;
    double cki1 = -2*xa*xb - b*xb;
    if (fabs(ckr1 + cki1) < 0.000000001) {
        cout << "did not work. result: " << ckr1 + cki1 << endl;
    }
    cout << "x = " << xa << " - " << xb << "i" << endl;
    double ckr2 = a*xa*xa - a*-xb*-xb + b*xa + c;
    double cki2 = -2*xa*-xb - b*-xb;
     if (fabs(ckr2 + cki2) < 0.000000001) {
        cout << "did not work. result: " << ckr2 + cki2 << endl;
    }

}

void processReal(double disc, double a, double b, double c) {
    double x1 = (-b + sqrt(disc))/(2*a);
    cout << "x = " << x1 << endl;
    double ck1 = a*x1*x1 + b*x1 + c;
    if (fabs(ck1) > 0.000000001) {
        cout << x1 << " did not work. result: " << ck1 << endl;
    }
    if (disc > 0) {
        double x2 = (-b - sqrt(disc))/(2*a);
        cout << "x = " << x2 << endl;
    double ck2 = a*x2*x2 + b*x2 + c;
    if (fabs(ck2) > 0.000000001) {
        cout << x2 << " did not work. result: " << ck2 << endl;
    }
    }
}

void processQuadratic(double a, double b, double c) {
    double disc = b*b - 4*a*c;
    if (disc < 0) {
        processImaginary(disc, a, b, c);
    }
    else {
        processReal(disc, a, b, c);
    }
}

void processLinear(double a, double b, double c) {
    if (b == 0) {
        if (c == 0) {
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
    if (a != 0) {
        cout << a << "x^2";
    }
    if (b != 0) {
        if (a != 0) {
            cout << " + ";
        }
        cout << b << "x";
    }
    if (c != 0) {
        if (b != 0 || a !=0) {
            cout << " + ";
        }
        cout << c;
    }
    cout << " = 0" << endl;
}

int main() {
    double a, b, c;
    cout << "Input coefficients a, b, & c: ";
    cin >> a >> b >> c;
    echoEquation(a, b, c);
    if (a == 0) {
        processLinear(a, b, c);
    }
    else {
        processQuadratic(a, b, c);
    }
}