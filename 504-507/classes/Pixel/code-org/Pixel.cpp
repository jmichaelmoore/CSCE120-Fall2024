// define a class Pixel
// explain public / private
// has integers for red, green, and blue
// constructors
//  - default
//  - all given
#include <stdexcept>
#include "Pixel.h"

void Pixel::setRed(short red) {
    if (red < 0 || red > 255) {
        throw std::invalid_argument("red must be between 0 and 255");
    }
    this->red = red;
}

void Pixel::setGreen(short green) {
    if (green < 0 || green > 255) {
        throw std::invalid_argument("green must be between 0 and 255");
    }
    this->green = green;
}
void Pixel::setBlue(short blue) {
    if (blue < 0 || blue > 255) {
        throw std::invalid_argument("blue must be between 0 and 255");
    }
    this->blue = blue;
}


Pixel r(255, 0, 0);
Pixel c(r);