#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// constructors
	Critter();
	Critter(std::string);
	Critter(std::string, double, int, double = 10);
	//  setter methods
	void setName(std::string& newname);
	void setHunger(double newhunger);
	void setBoredom(int newboredom);
	// getter method
	double getHunger();
	// service methods
	double conv_hunger(double hunger);
	int double_to_percent();
	void print();

	
};