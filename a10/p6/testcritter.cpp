#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c1;
	Critter c2("Muaaz");
	// name, hunger, boredom, height, thirst //
	Critter c3("MuaazR", 4, 45, 22.2);
	Critter c4("MuaazRa", 5, 34);
	Critter c5("MuaazRaj", 8, 32, 23.4, 8);

	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
	return 0;
}