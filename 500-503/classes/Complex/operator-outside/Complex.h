#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex {
    double real;
    double imag;
public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double real, double imaginary) : real(real), imag(imaginary) {}
    Complex(double real) : real(real), imag(0.0) {}
    Complex(const Complex& c) : real(c.real), imag(c.imag) {} // copy constructor
    double getReal() const;
    double getImaginary() const;
    void setReal(double real);
    void setImaginary(double imaginary);
    std::string to_string() const;
    Complex& operator=(const Complex& src);
    bool operator==(const Complex& rhs) const;
    Complex operator+(const Complex& rhs) const;
    Complex& operator-();
};

std::ostream& operator<<(std::ostream& os, const Complex& c);

#endif