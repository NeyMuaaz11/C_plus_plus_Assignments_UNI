#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

int Fraction::getNum() const {
    return num;
}

int Fraction::getDen() const {
    return den;
}

void Fraction::setNum(int num){
    this -> num = num;
}

void Fraction::setDen(int den){
    this -> den = den;
}

ostream& operator<<(ostream& out, const Fraction& a){
    out << a.getNum() << "/" << a.getDen();
    return out;
}

istream& operator>>(istream& in, Fraction& a){
    in >> a.num;
    in >> a.den;
    return in;
}

Fraction Fraction::operator*(const Fraction& b){
    Fraction prod;
    int newnum, newden;

    newnum = this -> getNum() * b.getNum();
    newden = this -> getDen() * b.getDen();

    prod.setNum(newnum);
    prod.setDen(newden);

    return prod;
}

Fraction Fraction::operator/(const Fraction& b){
    Fraction result;
    int newnum, newden;

    newnum = this -> getNum() * b.getDen();
    newden = this -> getDen() * b.getNum();

    result.setNum(newnum);
    result.setDen(newden);

    return result;

}