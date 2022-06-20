/*CH230
  Muaaz Rajput
  murajput@jaccobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    Complex c1, conj, sum, diff, mult;
    float r, i;

    // operate on first number //
    cout << "For First Number" << endl << "Real Part: ";
    cin >> r;
    c1.setReal(r);
    cout << "Imaginary Part: ";
    cin >> i;
    c1.setImag(i);
    cout << "Your Number is ";
    c1.print();
    c1.conjugate(&conj); // calculate and print conjugate //
    cout << "Conjugate: ";
    conj.print();
    cout << endl;

    // operate on second number //
    cout << "For Second Number" << endl << "Real Part: ";
    cin >> r;
    cout << "Imaginary Part: ";
    cin >> i;
    Complex c2(r, i);
    cout << "Your Number is ";
    c2.print();
    cout << endl;

    // add and print //
    sum = c1.add(c2);
    cout << "SUM = ";
    sum.print();

    // multiply and print //
    mult = c1.multiply(c2);
    cout << "PRODUCT = ";
    mult.print();

    // subtract and print //
    diff = c1.subtract(c2);
    cout << "DIFFERENCE = ";
    diff.print();

}