/* CH230 a11p4
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>
#include "Creature.h"
#include <cstring>

// function prototypes //
Wizard* create_wizard();
Witch* create_witch();
Witcher* create_witcher();
void delete_wizard(Wizard *w);
void delete_witch(Witch *w);
void delete_witcher(Witcher *w);


using namespace std;

int main()
{ 
    string cmd;
    Wizard *w;
    Witch *witch;
    Witcher *geralt;
    unsigned int i;
    
    // get input command and convert to lowercase //
    cin >> cmd;
    for (i = 0; i < strlen(&cmd[0]); i++)
        cmd[i] = tolower(cmd[i]);

    /* loop and call relevant functions and methods to construct and
       destruct until command is quit  */
    while (cmd != "quit"){
        if (cmd == "wizard"){
            w = create_wizard();
            w -> run();
            w -> hover();
            delete_wizard(w);
            cout << endl;
        }
        else if(cmd == "witch"){
            witch = create_witch();
            witch -> run();
            witch -> teleport(10);
            delete_witch(witch);
            cout << endl;
        }
        else{
            geralt = create_witcher();
            geralt -> run();
            geralt -> fast_travel(2500);
            delete_witcher(geralt);
            cout << endl;
        }
        cin >> cmd;
        for (i = 0; i < strlen(&cmd[0]); i++)
            cmd[i] = tolower(cmd[i]);
    }

    

    return 0;
} 

// create and delete functions //

Wizard* create_wizard(){
    return new Wizard;
}

Witch* create_witch(){
    return new Witch;
}

Witcher* create_witcher(){
    return new Witcher;
}

void delete_wizard(Wizard *w){
    delete w;
}

void delete_witch(Witch *w){
    delete w;
}

void delete_witcher(Witcher *w){
    delete w;
}