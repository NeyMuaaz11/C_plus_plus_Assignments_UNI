#include <iostream>
#include "Creature.h"

using namespace std;

// creature methods //
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
} 

// wizard methods //
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// witch methods //
Witch::Witch(){
    health = 100;
    cout << "Witch Constructor Called!" << endl;
}

void Witch::teleport(int tele) const{
    cout << "Teleported " << tele * distance<< " meters!" << endl;
}

// witcher methods //
Witcher::Witcher(){
    health = 100;
    armor = 0;
    cout << "Witcher Constructor Called!" << endl;
}

void Witcher::fast_travel(int ftrav) const{
    cout << "Fast travelled " << ftrav * distance << " meters!" << endl;
}