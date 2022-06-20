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
    while  (a != b){
        if (a > b)
            a = a - b;
        else    
            b = b - a;
    }
    tmp_gcd = a;

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

void Fraction::operator=(const Fraction& a){
    this->setNum(a.getNum());
    this->setDen(a.getDen());
}

Fraction Fraction::operator+(const Fraction& a){
    Fraction sum;
    int newnum, newden;

    // calculate lcm and add //
    newden = lcm(this -> getDen(), a.getDen());
    newnum = (this -> getNum() * (newden / this -> getDen()))
        + (a.getNum() * (newden / a.getDen()));

    sum.setNum(newnum);
    sum.setDen(newden);

    return sum;
}

Fraction Fraction::operator-(const Fraction& a){
    Fraction diff;
    int newnum, newden;

    // calculate lcm and subtract //
    newden = lcm(this -> getDen(), a.getDen());
    newnum = (this -> getNum() * (newden / this -> getDen()))
        - (a.getNum() * (newden / a.getDen()));

    diff.setNum(newnum);
    diff.setDen(newden);

    return diff;
}

bool Fraction::operator<(const Fraction& a){
    
    if (((this->getNum() / this->getDen()) - (a.getNum() / a.getDen()) > 0))
        return 0;
    else
        return 1;
}

bool Fraction::operator>(const Fraction& a){
    
    if (((this->getNum() / this->getDen()) - (a.getNum() / a.getDen()) > 0))
        return 1;
    else
        return 0;
}