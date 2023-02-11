#include <iostream>

using namespace std;

class Fraction2 {
public:
    Fraction2(int num, int den = 1)
        : m_numerator(num), m_denominator(den) {
        
        cout << "Fraction2 Constructor is called!" << endl;
    }

    Fraction2 operator+(const Fraction2& f) {

        cout << "Fraction2 operator+ is called!" << endl;

        return Fraction2(this->m_numerator + f.m_numerator, 
            this->m_denominator + f.m_denominator);
    }

private:
    int m_numerator;
    int m_denominator;
};

int main(int argc, char** argv) {

    Fraction2 f(3, 5);

    Fraction2 d2 = f + 4; // Convert 4 to Fraction(4, 1) through non-explicit ctor firstly

    return 0;
}