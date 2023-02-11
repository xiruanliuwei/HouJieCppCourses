
#include <iostream>

using namespace std;

class Fraction {
public:
    Fraction(int num, int den = 1) : m_numerator(num), m_denominator(den) {
        cout << "Fraction Constructor is called!" << endl;
    }

    operator double() const {
        cout << "Fraction double() is called!" << endl;

        return (double)(m_numerator / m_denominator);
    }

    friend double operator+(int i, const Fraction& f) {
        cout << "Fraction operator+() is called!" << endl;

        return (double)i + (double)f;
    }

private:
    int m_numerator; // Fen Zi
    int m_denominator; // Fen Mu
};

int main(int argc, char** argv) {

    Fraction f(3, 5);
    double d = 4 + f;

    return 0;
}