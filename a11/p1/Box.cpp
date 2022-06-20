#include <iostream>
#include "Box.h"

using namespace std;

// constructors //
Box::Box(){
    cout << "Default Constructor Called!" << endl;
}

Box::Box(double newheight, double newwidth, double newdepth){
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

Box::Box(const Box &box){
    height = box.height;
    width = box.width;
    depth = box.depth;
}

// setter methods //
void Box::setHeight(const double newheight){
    height = newheight;
}

void Box::setWidth(const double new_width){
    width = new_width;
}

void Box::setDepth(const double newdepth){
    depth = newdepth;
}

// getter methods //
double Box::getHeight() const {
    return height;
}

double Box::getWidth() const {
    return width;
}

double Box::getDepth() const {
    return depth;
}

// service methods //
void Box::print() const {
    cout << "HEIGHT = " << height << endl;
    cout << "WIDTH = " << width << endl;
    cout << "DEPTH = " << depth << endl;
}

void Box::print_loop(Box *list, int size) const {
    int i;
    for(i = 0; i < size * 2; i++){
        list[i].print();
        cout << endl;
    }
}

void Box::print_volume(Box *list, int size) const {
    int i;
    double volume;

    // loop over boxes and calcuate and print volume of each //
    for(i = 0; i < size * 2; i++){
        volume = list[i].getDepth() * list[i].getHeight() * list[i].getWidth();
        cout << "Volume of Box #" << i << ": " << volume << endl;
    }
}