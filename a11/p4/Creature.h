#include <iostream>

using namespace std;

// parent class //
class Creature {
	public:
		Creature(); // default constructor //
        // inline destructor //
        ~Creature(){cout << "Creature Destructor Called!" << endl;};
		void run() const;

	protected:
		int distance;
};


// wizard inherits creature //
// child class //
class Wizard : public Creature {
	public:
		Wizard(); // default constructor //
        // inline destructor //
        ~Wizard(){cout << "Wizard Destructor Called!" << endl;};
		void hover() const;

	private:
		int distFactor;
};


// witch inherits creature //
// child class //
class Witch : public Creature{
    private:
    int health;

    public:
    Witch(); // default constructor //
    ~Witch(){cout << "Witch Destructor Called!" << endl;}; // inline destructor
    void teleport(int) const;

};

// witcher class inherits creature //
// child class //
class Witcher : public Creature{
    private:
    int health, armor;

    public:
    Witcher(); // default constructor //
    ~Witcher(){cout << "Witcher Destructor Called!" << endl;};//inline destructor
    void fast_travel(int) const;
};