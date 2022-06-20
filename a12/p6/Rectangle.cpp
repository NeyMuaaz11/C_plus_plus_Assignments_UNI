#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle..." << std::endl;
	return length*width;
}

double Rectangle::calcPerimeter() const{
    std::cout << "calcPerimeter of Rectangle..." << std::endl;
    return (2*length) + (2*width);
}