
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
float Complex::getReal(){
    return real;
}

float Complex::getImag(){
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