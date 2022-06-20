#include <iostream>
#include "Critter.h"

using namespace std;

// setter methods //
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setHeight(double newheight){
    height = newheight;
}

void Critter::setAge(int newage){
    age = newage;
}

void Critter::setWeight(double new_weight){
    weight = new_weight;
}

void Critter::setBoredom(int newboredom){
    boredom = newboredom;
}

// getter methods //
int Critter::getHunger() {
	return hunger;
}

string Critter::getName(){
    return name;
}

int Critter::getBoredom(){
    return boredom;
}

int Critter::getAge(){
    return age;
}

double Critter::getHeight(){
    return height;
}

double Critter::getWeight(){
    return weight;
}

// service method to print using the getter methods //
void Critter::print() {
	cout << "I am " << getName() << ". My hunger level is " << getHunger()
    << "." << endl;
    cout << "I am " << getAge() << " years old and my weight is " << getWeight()
    << "kg." << endl;
    cout << "My height is " << getHeight() << " and my boredom level is " <<
    getBoredom() << endl;
}


