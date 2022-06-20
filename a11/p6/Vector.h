#include <iostream>

using namespace std;

class Vector{

    public:
    unsigned int size;
    double *data;
    Vector();
    Vector(unsigned int);
    Vector(const Vector&);
    ~Vector();
    double* getData() const;
    unsigned int getSize() const;
    void print() const;
    void setSize(unsigned int);
    void setData(double*, unsigned int);
    double norm() const;
    Vector add(Vector);
    Vector diff(Vector);
    double prod(Vector);



};