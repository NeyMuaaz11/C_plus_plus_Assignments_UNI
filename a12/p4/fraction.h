// simple class for fractions
#include <iostream>
#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend ostream& operator<<(ostream&, const Fraction&);// prints it to the screen
    friend istream& operator>>(istream&, Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    // getter methods //
    int getNum() const;
    int getDen() const;
    // setter methods //
    void setNum(int);
    void setDen(int);
};


#endif /* FRACTION_H_ */
 