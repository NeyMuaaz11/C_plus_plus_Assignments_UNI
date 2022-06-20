// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

//------------Shape related constructors and methods------------//
Shape::Shape(){
    name = "NO_NAME";
}

Shape::Shape(const Shape& n){
    name = n.getName();
}

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

string Shape::getName() const {
    return name;
}

void Shape::setName(string new_name){
    name = new_name;
}
//--------------------------------------------------------------//

//==============================================================//

//--------CenteredShape related constructors and methods--------//
CenteredShape::CenteredShape() : Shape(){
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& n) : Shape(n.getName()){
    x = n.get_x_coord();
    y = n.get_y_coord();
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

double CenteredShape::get_x_coord() const {
    return x;
}

double CenteredShape::get_y_coord() const {
    return y;
}

void CenteredShape::set_center(double nx, double ny){
    x = nx;
    y = ny;
}
//--------------------------------------------------------------//

//==============================================================//

//--------RegularPolygon related constructors and methods-------//
RegularPolygon::RegularPolygon() : CenteredShape(){
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& n) : 
   CenteredShape(n.getName(), n.get_x_coord(), n.get_y_coord()){
       EdgesNumber = n.get_Edges();
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

int RegularPolygon::get_Edges() const{
    return EdgesNumber;
}

void RegularPolygon::set_Edges(int new_edges){
    EdgesNumber = new_edges;
}
//--------------------------------------------------------------//

//==============================================================//

//-----------Circle related constructors and methods------------//
Circle::Circle() : CenteredShape(){
    Radius = 0;
}

Circle::Circle(const Circle& n) : CenteredShape(n.getName(), n.get_x_coord(), 
n.get_y_coord()){
    Radius = n.get_Radius();
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

double Circle::get_Radius() const {
    return Radius;
}

void Circle::set_Radius(double nr){
    Radius = nr;
}

double Circle::Perimeter() const {
    return 2 * M_PI * Radius;
}

double Circle::Area() const{
    return M_PI * Radius * Radius;
}
//--------------------------------------------------------------//

//==============================================================//

//----------Rectangle related constructors and methods----------//
Rectangle::Rectangle() : RegularPolygon(){
    width = 0;
    height = 0;
}

Rectangle::Rectangle(const Rectangle& n) :
  RegularPolygon(n.getName(), n.get_x_coord(), n.get_y_coord() , 4){
    width = n.getWidth();
    height = n.getHeight();
}

Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth, 
double nheight) : RegularPolygon(n, nx, ny, 4){
    width = nwidth;
    height = nheight;
}

void Rectangle::setWidth(double nwidth){
    width = nwidth;
}

void Rectangle::setHeight(double nheight){
    height = nheight;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::Perimeter() const {
    return (2*height) + (2*width);
}

double Rectangle::Area() const {
    return height * width;
}
//--------------------------------------------------------------//

//==============================================================//

//----------Square related constructors and methods-------------//
Square::Square() : Rectangle(){
    side = 0;
}

Square::Square(const Square& n) : 
  Rectangle(n.getName(), n.get_x_coord(), n.get_y_coord(), 
  n.getWidth(), n.getHeight()){
      side = n.getSide();
}

Square::Square(const string& n, double nx, double ny, double nside)
  : Rectangle(n, nx, ny, nside, nside){
      side = nside;
}

void Square::setSide(double nside){
    side = nside;
}

double Square::getSide() const {
    return side;
}

double Square::Perimeter() const {
    return 4*side;
}

double Square::Area() const {
    return side*side;
}
//--------------------------------------------------------------//