/*  CH230 a13p4
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:

  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
 
/*The error message states that d.print() is ambiguous. This happens as
    the compiler does not know which print function to call as it is 
    duplicated due to multiple inheritance. D inherits B and C. Both B and C
    inherit A and this results in the print function being duplicated within D
    Adding the virtual keyword fixes this problem and the print function is only
    inherited once as A constructor is called only once within D and not within
    B and C due to the virtual keyword*/