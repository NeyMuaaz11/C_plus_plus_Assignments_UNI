#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c1;
	Critter c2("Muaaz");
	Critter c3("MuaazR", 4, 45, 22.2);
	Critter c4("MuaazRa", 10, 34);

	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}