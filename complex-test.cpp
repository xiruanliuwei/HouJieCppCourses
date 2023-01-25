
#include <iostream>

#include "complex.h"

using namespace std;

int main(int argc, char** argv) {

    // complex c0;  // this statement will generate an error message if "complex() = delete; "
    // complex c1();

    complex c2;
    std::cout << c2.real() << std::endl;
    std::cout << c2.imag() << std::endl;

    return 0;
}