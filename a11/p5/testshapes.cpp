/* CH230 a11p5
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  Rectangle r("first rectangle", 0, 0, 4, 5);
  Square s("first square", 0, 0, 4);

  cout << "Name, Area, and Perimeter of each shape:" << endl << endl;

  cout << "NAME = ";
  c.printName();
  cout << "AREA = " << c.Area() << endl;
  cout << "PERIMETER = " << c.Perimeter() << endl << endl;
  
  cout << "NAME = ";
  r.printName();
  cout << "AREA = " << r.Area() << endl;
  cout << "PERIMETER = " << r.Perimeter() << endl << endl;
  
  cout << "NAME = ";
  s.printName();
  cout << "AREA = " << s.Area() << endl;
  cout << "PERIMETER = " << s.Perimeter() << endl << endl;
  
  return 0;
}