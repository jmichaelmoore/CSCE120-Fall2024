// define a class Pixel
// explain public / private
// has integers for red, green, and blue
// constructors
//  - default
//  - all given

class Pixel {
private: // not needed
    short red;
    short green;
    short blue;
public:
    Pixel() : red(0), green(0), blue(0) {}
    Pixel(short red, short green, short blue) :
        red(red), green(green), blue(blue) {}
    Pixel(const Pixel& p) : red(p.red), green(p.green), blue(p.blue) {}
};

Pixel r(255, 0, 0);
Pixel c(r);