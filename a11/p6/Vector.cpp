#include <iostream>
#include "Vector.h"
#include <math.h>

using namespace std;

Vector::Vector(){
    size = 0;
    cout << "Default Constructor Called" << endl;
}

Vector::Vector(unsigned int nsize){
    size = nsize;
    data = new double[size];
    if(data)
        cout << "Parametric Constructor Called!" << endl;
    else
        cout << "Memory Allocation Error" << endl;
}

Vector::Vector(const Vector& n){
    unsigned int i;
    size = n.getSize();
    data = new double[size];
    if(data != NULL){
        for (i = 0; i < size; i++){
            data[i] = n.data[i];
        }
    }
    cout << "Copy Constructor Called!" << endl;
}

Vector::~Vector(){
    delete [] data;
    cout << "Destructor Called!" << endl;
}

void Vector::setData(double *ptr, unsigned int s){
    unsigned int i;
    if (s < size){
        for (i = 0; i < s; i++){
            data[i] = ptr[i];
            cout << ptr[i] << " " ;
        }
    }else{
        for (i = 0; i < size; i++){
            data[i] = ptr[i];
            cout << ptr[i] << " " ;
        }
    }
}

void Vector::setSize(unsigned int new_size){
    size = new_size;
}

double* Vector::getData() const {
    return data;
}

unsigned int Vector::getSize() const {
    return size;
}

void Vector::print() const {
    unsigned int i;
    for (i = 0; i < size; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

double Vector::norm() const{
    unsigned int i;
    double norm = 0;
    for (i = 0; i < size; i++){
        norm = norm + (data[i] * data[i]);
    }
    return sqrt(norm);
}

Vector Vector::add(Vector v){
    unsigned int i;
    Vector v2(v.getSize());
    if (size == v.getSize()){
        for (i = 0; i < size; i++){
            v2.data[i] = data[i] + v.data[i];
        }
    }
    return v2;
}

Vector Vector::diff(Vector v){
    unsigned int i;
    Vector v2(v.getSize());
    if (size == v.getSize()){
        for (i = 0; i < size; i++){
            v2.data[i] = data[i] - v.data[i];
        }
    }
    return v2;
}

double Vector::prod(Vector v){
    unsigned int i;
    double result = 0;
    if (size == v.getSize()){
        for (i = 0; i < size; i++){
            result = result + (data[i] * v.data[i]);
        }
    }
    return result;
}