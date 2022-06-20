#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std;


/**********************Constructors**********************/
TournamentMember::TournamentMember(){
    fname = new char[36];
    fname[36] = '\0';
    fname[0] = 'n';

    lname = new char[36];
    lname[0] = 'n';

    dob = new char[11];
    dob[0] = 'n';
    age = 0;

    nationality = "NONE";

    cout << "Default Constructor Called" << endl;
}

TournamentMember::TournamentMember(char* f, char* l, char* bd, int new_age,
    string nation){
    fname = new char[36];
    fname[36] = '\0';
    strncpy(fname, f, 35);

    lname = new char[36];
    strncpy(lname, l, 36);

    dob = new char[11];
    strncpy(dob, bd, 11);

    age = new_age;
    nationality = nation;
    cout << "Parametric Constructor Called" << endl;
};

TournamentMember::TournamentMember(const TournamentMember& memb){
    fname = new char[36];
    strcpy(fname, memb.get_fname());

    lname = new char[36];
    strcpy(lname, memb.get_lname());

    dob = new char[11];
    strcpy(dob, memb.get_dob());
    
    age = memb.getAge();
    nationality = memb.getNation();

    cout << "Copy Constructor Called" << endl;
}
/*******************************************************/

/***********************Destructor**********************/
TournamentMember::~TournamentMember(){
    delete [] fname;
    delete [] lname;
    delete [] dob;
    cout << "Destructor Called" << endl;
}
/*******************************************************/

/*********************Service methods********************/
void TournamentMember::print() const{
    cout << "FIRST NAME: " << fname << endl;
    cout << "LAST NAME: " << lname << endl;
    cout << "D.O.B: " << dob << endl;
    cout << "AGE: " << age << endl;
    cout << "NATIONALITY: " << nationality << endl << endl;
}


/*******************************************************/