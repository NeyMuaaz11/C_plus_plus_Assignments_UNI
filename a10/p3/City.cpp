#include <iostream>
#include "City.h"

using namespace std;

void City::setMayor(string newmayor){
    mayor = newmayor;
}

void City::setName(string newname){
    name = newname;
}

void City::setPop(int newpop){
    population = newpop;
}

void City:: setArea(double newarea){
    area = newarea;
}

void City::print(){
    // printing each property using respective getter method //
    cout << "The mayor of " << getName() << " is " << getMayor();
    cout << ". The city has a population of " << getPop();
    cout << " people, with an area of " << getArea() << " kilometers squared" 
    << endl;
}

string City::getName(){
    return name;
}

string City::getMayor(){
    return mayor;
}

int City::getPop(){
    return population;
}

double City::getArea(){
    return area;
}