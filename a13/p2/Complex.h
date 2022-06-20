#include <iostream>
using namespace std;

class Complex{
    private:
    float real, imag;

    public:
    // three constructors //
    Complex();
    Complex(float, float);
    Complex(const Complex&);
    // empty destructor //
    ~Complex();
    // setter methods //
    void setReal(float);
    void setImag(float);
    // getter methods //
    float getReal() const;
    float getImag() const;
    // service methods //
    void print();
    void conjugate(Complex *c);
    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);
    // overloaded operators
    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    void operator=(const Complex&);
    friend ostream& operator<<(ostream&, const Complex&);
    friend ostream& operator>>(istream&, const Complex&);
};