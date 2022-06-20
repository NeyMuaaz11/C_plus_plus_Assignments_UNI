
#include <iostream>
#include "Complex.h"

// constructor methods //
Complex::Complex(){
    //std::cout << "Default Constructor Called!" << std::endl;
    real = imag = 0;
}

Complex::Complex(float r, float i){
    //std::cout << "Parametric Constructor Called!" << std::endl;
    real = r;
    imag = i;
}

Complex::Complex(const Complex &c){
    //std::cout << "Copy Constructor Called!" << std::endl;
    real = c.real;
    imag = c.imag;
}

// destructor method //
Complex::~Complex(){

}

// setter methods //
void Complex::setReal(float r){
    real = r;
}

void Complex::setImag(float i){
    imag = i;
}

// getter methods //
float Complex::getReal() const {
    return real;
}

float Complex::getImag() const {
    return imag;
}

// service methods //
void Complex::print(){
    if (imag < 0){ // print according to sign of imaginary part //
        std::cout << real << imag << "i" << std::endl;
    }else{
        std::cout << real << "+" << imag << "i" << std::endl;
    }
}

void Complex::conjugate(Complex *c){
    c -> imag = -1 * imag;
    c -> real = real;
}

Complex Complex::add(Complex c){
    c.real = real + c.real;
    c.imag = imag + c.imag;
    return c;
}

Complex Complex::subtract(Complex c){
    c.real = real - c.real;
    c.imag = imag - c.imag;
    return c;
}

Complex Complex::multiply(Complex c){
    float real_copy = c.real, imag_copy = c.imag;
    // calculate product of two complex numbers using given formula //
    c.real = (real * real_copy) - (imag * imag_copy);
    c.imag = (imag * real_copy) + (real * imag_copy);
    return c;
}


// operators overloading

Complex Complex::operator+(const Complex& b)const {
    Complex sum;
    float r, i, b_real, b_imag;

    b_real = b.getReal();
    b_imag = b.getImag(); 

    r = real + b_real;
    i = imag + b_imag;

    sum.setReal(r);
    sum.setImag(i);
    
    return sum;
}

Complex Complex::operator-(const Complex& b)const{
    Complex diff;
    float r, i, b_real, b_imag;

    b_real = b.getReal();
    b_imag = b.getImag(); 

    r = real - b_real;
    i = imag - b_imag;

    diff.setReal(r);
    diff.setImag(i);

    return diff;
}

Complex Complex::operator*(const Complex& b) const{
    Complex prod;
    float r, i, b_real, b_imag;

    b_real = b.getReal();
    b_imag = b.getImag(); 

    r = (real * b_real) - (imag * b_imag);
    i = (imag * b_real) + (real * b_imag);

    prod.setImag(i);
    prod.setReal(r);

    return prod;
}

void Complex::operator=(const Complex& b){
    this -> setReal(b.getReal());
    this -> setImag(b.getImag());

}

ostream& operator<<(ostream& out, const Complex& b){
    if (b.getImag() < 0){
        out << b.getReal() << b.getImag() << "i";
    }
    else
        out << b.getReal() << "+" << b.getImag() << "i";

    return out;    
}

istream& operator>>(istream& in, Complex& b){
    float r, i;

    cout << "Enter Real Part: ";
    in >> r;

    cout << "Enter Imaginary Part: ";
    in >> i;

    b.setImag(i);
    b.setReal(r);

    return in; 
}