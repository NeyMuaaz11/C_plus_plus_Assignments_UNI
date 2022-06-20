/* CH230 a12p1
    Muaaz Rajput
    murajput@jacobs-university.de*/


#include <iostream>
#include "Shapes.h"

using namespace std;

int main(){
    // create first hexagon
	Hexagon a;
    a.setColor("Blue");
    a.setSide(9);
    
    // create second hexagon
    Hexagon b;
    b.setColor("Green");
    b.setSide(15);

    // create third hexagon as copy of second
    Hexagon c(b);

    // compute and print area and perimeter of each hexagon
    cout << "AREA OF A = " << a.area() << endl;
    cout << "PERIMETER OF A = " << a.perimeter() << endl << endl;

    cout << "AREA OF B = " << b.area() << endl;
    cout << "PERIMETER OF B = " << b.perimeter() << endl << endl;

    cout << "AREA OF C = " << c.area() << endl;
    cout << "PERIMETER OF C = " << c.perimeter() << endl << endl;
}