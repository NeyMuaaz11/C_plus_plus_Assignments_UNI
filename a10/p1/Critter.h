#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int age;
	double weight;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setWeight(doube new_weight);
	void setAge(int age);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};