/* CH230
    Muaaz Rajput
    murajput@jacobs-university.de*/


#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a, b;
    Fraction sum, diff;

    // get input
    cout << "First Fraction:" << endl;
    cin >> a;
    cout << "Second Fraction:" << endl;
    cin >> b;

    if (a > b)
        cout << a << " is greater!" << endl;
    else
        cout << b << " is greater!" << endl;

    sum = a + b;
    diff = a - b;

    cout << "SUM: " << sum << endl;
    cout << "DIFFERENCE: " << diff << endl;


    return 0;
}