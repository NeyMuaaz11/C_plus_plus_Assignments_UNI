#include <iostream>
#include "Crittter.h"
using namespace std;

Critter::Critter(){
    cout << "Constructor ONE!" << endl;
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0;
}

Critter::Critter(string new_name){
    cout << "Constructor TWO!" << endl;
    name = new_name;
    height = 5;
    boredom = 0;
    hunger = 0; 
}

Critter::Critter(string new_name, double newhunger, int newboredom, 
    double newheight){
    cout << "Constructor THREE!" << endl;
    name = new_name;
    hunger = conv_hunger(newhunger);
    boredom = newboredom;
    height = newheight;
}

// converts hunger from int to double //
double Critter::conv_hunger(double newhunger){
    return (newhunger / 10);
}

// converts from double back to int for percent //
int Critter::double_to_percent(){
    return (getHunger() * 100);
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(double newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " <<
    double_to_percent() << "%." << endl;
    cout << "My boredom level is " << boredom << ".";
    cout << " My height is " << height << "." << endl << endl;
}

double Critter::getHunger() {
	return hunger;
}


