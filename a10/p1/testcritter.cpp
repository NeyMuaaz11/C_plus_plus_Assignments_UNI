#include <iostream>
#include <cstdlib>
#include "Critter.h"

susing namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger, age;
    double weight;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
    cout << "Age: ";
    cin >> age;
    c.setAge(age);
    cout << "Weight: ";
    cin >> weight;
    c.setWeight(weight);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}