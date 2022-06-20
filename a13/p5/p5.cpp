/*  CH230 a13p5
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(){x = 0;};
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
    public:
    D():A(),B(),C(){};
    D(int i) : A(i),B(),C(){};
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*There is no default constructor defined for D. As both B and C
inherit A, they call the A constructor twice, leading to ambiguity.
However, as A is inherited virtually, its constructor has to be called
explicitly, or else x will have no value, which is not being done.
Therefore we add explicit constructor calls to A inside D, both default
and parametric*/