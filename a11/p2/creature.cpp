/* CH230 a11p2
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature(); // default constructor //
        // inline destructor //
        ~Creature(){cout << "Creature Destructor Called!" << endl;};
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard(); // default constructor //
        // inline destructor //
        ~Wizard(){cout << "\nWizard Destructor Called!" << endl;};
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// witch inherits creature //
class Witch : public Creature{
    private:
    int health;

    public:
    Witch(); // default constructor //
    ~Witch(){cout << "\nWitch Destructor Called!" << endl;}; // inline destructor
    void teleport(int) const;

};

Witch::Witch(){
    health = 100;
    cout << "Witch Constructor Called!" << endl;
}

void Witch::teleport(int tele) const{
    cout << "Teleported " << tele * distance << " meters!" << endl;
}

// witcher class inherits creature //
class Witcher : public Creature{
    private:
    int health, armor;

    public:
    Witcher(); // default constructor //
    ~Witcher(){cout << "\nWitcher Destructor Called!" << endl;};//inline destructor
    void fast_travel(int) const;
};

Witcher::Witcher(){
    health = 100;
    armor = 0;
    cout << "Witcher Constructor Called!" << endl;
}

void Witcher::fast_travel(int ftrav) const{
    cout << "Fast travelled " << ftrav * distance << " meters!" << endl;
}


int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    cout << endl;

    cout << "Creating a Witch." << endl;
    Witch witch;
    witch.run();
    witch.teleport(100);
    cout << endl;

    cout << "Creating a Witcher." << endl;
    Witcher geralt;
    geralt.run();
    geralt.fast_travel(25000);

    return 0;
} 
// destructors called when scope ends //