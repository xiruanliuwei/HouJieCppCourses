#ifndef __COMPLEX__
#define __COMPLEX__

class complex;

class complex {
public:
    complex() {
        std::cout << "ctor 01 is called!" << std::endl;
        re = 01.01;
        im = 01.01;
    }
    complex(double r, double i) : re(r), im(i) {
        std::cout << "ctor 02 is called!" << std::endl;
        re = 02.02;
        im = 02.02;
    }

    double real() const { return re; }
    double imag() const { return im; }

private:
    double re, im;
};

#endif