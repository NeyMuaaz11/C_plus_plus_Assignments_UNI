#include <iostream>

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
    float getReal();
    float getImag();
    // service methods //
    void print();
    void conjugate(Complex *c);
    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);
};