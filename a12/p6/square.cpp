#include <iostream>
#include "square.h"

Square::Square(const char *n, double a) : Rectangle(n,a,a){
    side = a;
}

double Square::calcPerimeter() const{
    std::cout << "calcPerimeter of Square..." << std::endl;
    return 4*side;
}

double Square::calcArea() const{
    std::cout << "calcArea of Square..." << std::endl;
    return side*side;
}