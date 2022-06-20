/* CH230 a11p3
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>
#include "Creature.h"

using namespace std;

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