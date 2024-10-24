 #ifndef PIXEL_H
 #define PIXEL_H

class Pixel {
private: // not needed
    short red;
    short green;
    short blue;
public:
    // constructors
    Pixel() : red(0), green(0), blue(0) {}
    Pixel(short red, short green, short blue) :
        red(red), green(green), blue(blue) {}
    Pixel(const Pixel& p) : red(p.red), green(p.green), blue(p.blue) {}

    //getters & setters
    short getRed() { return red; }
    short getGreen() { return green; }
    short getBlue() { return blue; }

    void setRed(short red);
    void setGreen(short green);
    void setBlue(short blue);
};

 #endif