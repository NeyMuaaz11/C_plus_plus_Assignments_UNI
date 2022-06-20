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
	void setWeight(double new_weight);
	void setHeight(double newheight);
	void setAge(int age);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter methods
	std::string getName();
	int getHunger();
	int getBoredom();
	int getAge();
	double getWeight();
	double getHeight();
	// service method
	void print();
};