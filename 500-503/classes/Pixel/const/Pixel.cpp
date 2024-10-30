#include<stdexcept>
#include<sstream>
#include "Pixel.h"

Pixel::Pixel (unsigned short red, unsigned short green, unsigned short blue) : 
    red(red), green(green), blue(blue) {
        if (red>255 || green>255 || blue>255) {
            throw std::invalid_argument("Color values must be 255 or less.");
        }
    }

Pixel::Pixel(const Pixel& p) : red(p.red), green(p.green), blue(p.blue) {} // copy constructor

Pixel::Pixel() : red(0), green(0), blue(0) {} // default constructor

unsigned short Pixel::getRed() const {
    return red;
}

void Pixel::setRed(unsigned short red) {
    if (red>255) {
        throw std::invalid_argument("Color values must be 255 or less.");
    }
    this->red = red;
}

unsigned short Pixel::getGreen() const {
    return green;
}

void Pixel::setGreen(unsigned short green) {
    if (green>255) {
        throw std::invalid_argument("Color values must be 255 or less.");
    }
    this->green = green;
}

unsigned short Pixel::getBlue() const {
    return blue;
}

void Pixel::setBlue(unsigned short blue) {
    if (blue>255) {
        throw std::invalid_argument("Color values must be 255 or less.");
    }
    this->blue = blue;
}

Pixel& Pixel::operator=(const Pixel& src) {
    this->red = src.red;
    this->green = src.green;
    this->blue = src.blue;
    return *this;
}

Pixel Pixel::operator+(const Pixel& src) const {
    Pixel p;
    p.red = (this->red+src.red)/2;
    p.green = (this->green+src.green)/2;
    p.blue = (this->blue+src.blue)/2;
    return p;
}

Pixel& Pixel::operator-() {
    this->red = 255 - this->red;
    this->green = 255 - this->green;
    this->blue = 255 - this->blue;
    return *this;
}

bool Pixel::operator==(const Pixel& src) const {
    return this->red == src.red &&
           this->green == src.green &&
           this->blue == src.blue;
}