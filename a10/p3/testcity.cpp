/*CH-230
  Muaaz Rajput
  murajput@jacobs-university.de*/

#include <iostream>
#include "City.h"

using namespace std;

int main(){
    City Bremen, Paris, London;

    // set name for each instance //
    Bremen.setName("Bremen");
    Paris.setName("Paris");
    London.setName("London");

    // set mayor for each instance //
    Bremen.setMayor("Mayor of Bremen");
    Paris.setMayor("Mayor of Paris");
    London.setMayor("Mayor of London");

    // set area for each instance //
    Bremen.setArea(690);
    Paris.setArea(700);
    London.setArea(800);

    // set population for each instance //
    Bremen.setPop(600012);
    Paris.setPop(50000);
    London.setPop(69000);

    // print the properties of each instance //
    Bremen.print();
    Paris.print();
    London.print();
}