#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout << "I am " << age << "years old and my weight is " << weight << "kg." 
    << endl;
}

int Critter::getHunger() {
	return hunger;
}

void Critter::setAge(int newage){
    age = newage;
}

void Critter::setWeight(double new_weight){
    weight = new_weight;
}