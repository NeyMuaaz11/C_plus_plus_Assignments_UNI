/* CH230 a11p6
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
    Vector v1;
    Vector v2(unsigned(4));
    Vector v4(unsigned(4));

    double data_one[4] = {1, 2, 3, 4};
    double data_two[4] = {5, 6, 7, 8};
    double data_three[4] = {9, 10, 11, 12};
    
    double norm, prod;


    v1.setSize(unsigned(4));
    v1.setData(&data_one[0], unsigned(4));
    v2.setData(&data_two[0], unsigned(4));
    v4.setData(&data_three[0], unsigned(4));
    Vector v3(v2);

    cout << "Before Operations: " << endl;

    cout << "FIRST VECTOR = ";
    v1.print();
    cout << endl;

    cout << "SECOND VECTOR = ";
    v2.print();
    cout << endl;

    cout << "THIRD VECTOR = ";
    v3.print();
    cout << endl;

    cout << "FOURTH VECTOR = ";
    v4.print();
    cout << endl;

    norm = v2.norm();
    prod = v2.prod(v4);

    cout << "NORM OF SECOND = " << norm << endl;

    cout << "SUM = ";
    (v2.add(v4)).print();
    cout << endl;

    cout << "SCALAR PRODUCT = " << prod << endl;

    cout << "DIFFERENCE = ";
    (v2.diff(v4)).print();
    cout << endl;

}