#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a, b;
    Fraction prod, div;

    cout << "Enter First Fraction:" << endl;
    cin >> a;

    cout << "Enter Second Fraction:" << endl;
    cin >> b;

    prod = a*b;
    div = a/b;

    cout << "PRODUCT: " << prod << endl;
    cout << "DIVISION: " << div << endl;

    return 0;
}