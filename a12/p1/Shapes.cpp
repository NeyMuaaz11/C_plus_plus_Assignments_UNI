// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(){
    name = "NO_NAME";
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape() : Shape(){
    x = y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon() : CenteredShape(){
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Hexagon::Hexagon(){
    cout << "Default Constructor Called" << endl;
}

Hexagon::Hexagon(string& n, double nx, double ny, double new_side,
 string new_color) : RegularPolygon(n, nx, ny, 6) {
    side = new_side;
    color = new_color;
}

Hexagon::Hexagon(const Hexagon& n){
    side = n.getSide();
    color = n.getColor();
    cout << "Copy Constructor Called" << endl;
}

Hexagon::~Hexagon(){
    cout << "Destructor Called" << endl;
}

string Hexagon::getColor() const {
    return color;
}

double Hexagon::getSide() const {
    return side;
}

void Hexagon::setSide(double side){
    this -> side = side;
}

void Hexagon::setColor(string color){
    this -> color = color;
}

double Hexagon::area() const {
    double area;
    area = ((3 * sqrt(3)) / 2) * pow(this -> side, 2);
    return area;
}

double Hexagon::perimeter() const {
    return 6 * this -> side;
}