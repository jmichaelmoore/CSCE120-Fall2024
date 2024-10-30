#include "Complex.h"
#include <sstream>
#include <string>

double Complex::getReal() const { return real; }
double Complex::getImaginary() const {return imag; }
void Complex::setReal(double real) { this->real = real; }
void Complex::setImaginary(double imaginary) { this->imag = imaginary; }

std::string Complex::to_string() const {
  std::ostringstream oss;
  oss << real;
  if (imag < 0) { // negative imag
    oss << " - " << (-1*imag);
  }
  else {
    oss << " + " << imag;
  }
  oss << "i";
  return oss.str();
}

Complex& Complex::operator=(const Complex& src) {
  this->real = src.real;
  this->imag = src.imag;
  return *this;
}

bool Complex::operator==(const Complex& rhs) const {
  return this->real == rhs.real &&
      this->imag == rhs.imag;
}

Complex Complex::operator+(const Complex& rhs) const {
  Complex c;
  c.real = this->real + rhs.real;
  c.imag = this->imag + rhs.imag;
  return c;
}

Complex& Complex::operator-() {
  this->real *= -1;
  this->imag *= -1;
  return *this;
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
  os << c.to_string();
  return os;
}
