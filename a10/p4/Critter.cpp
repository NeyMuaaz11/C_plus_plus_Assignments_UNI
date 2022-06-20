#include <iostream>
#include "Critter.h"

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

Critter::Critter(string new_name, int newhunger, int newboredom, 
    double newheight){
    cout << "Constructor THREE!" << endl;
    name = new_name;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "My boredom level is " << boredom << ".";
    cout << " My height is " << height << "." << endl << endl;
}

int Critter::getHunger() {
	return hunger;
}


