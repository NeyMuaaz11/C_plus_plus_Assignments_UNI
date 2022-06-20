#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std;


// TOURNAMENTMEMBER METHODS AND CONSTRUCTORS //

/**********************Constructors**********************/
TournamentMember::TournamentMember(){
    fname = new char[36];
    fname[36] = '\0';

    lname = new char[36];

    dob = new char[11];

    age = 0;

    nationality = "NONE";

    location = "N/A";

    cout << "Member Default Constructor Called" << endl;
}

TournamentMember::TournamentMember(char* f, char* l, char* bd, int new_age,
    string nation, string new_location){
    fname = new char[36];
    fname[36] = '\0';
    strncpy(fname, f, 35);

    lname = new char[36];
    strncpy(lname, l, 36);

    dob = new char[11];
    strncpy(dob, bd, 11);

    age = new_age;
    nationality = nation;
    cout << new_location;
    location = new_location;

    cout << "Member Parametric Constructor Called" << endl;
};

TournamentMember::TournamentMember(const TournamentMember& memb){
    fname = memb.get_fname();
    lname = memb.get_lname();
    dob = memb.get_dob();
    age = memb.getAge();
    nationality = memb.getNation();
    location = memb.getLoc();

    cout << "Member Copy Constructor Called" << endl;
}
/*******************************************************/

/***********************Destructor**********************/
TournamentMember::~TournamentMember(){
    delete [] fname;
    delete [] lname;
    delete [] dob;
    cout << "Member Destructor Called" << endl;
}
/*******************************************************/

/*********************Service methods********************/
void TournamentMember::print() const{
    cout << "FIRST NAME: " << fname << endl;
    cout << "LAST NAME: " << lname << endl;
    cout << "D.O.B: " << dob << endl;
    cout << "AGE: " << age << endl;
    cout << "NATIONALITY: " << nationality << endl;
}

void TournamentMember::changeloc(string newloc){
    this -> location = newloc;
}

/*******************************************************/

// PLAYER METHODS AND CONSTRUCTORS //

Player::Player(){
    number = 0;
    foot = 'n';
    position = "N/A";
    goals = 0;
    
    cout << "Player Default Constructor" << endl;
}

Player::Player(char* f, char* l, char* bd, int new_age,
    string nation, int number, int goals,
    char foot, string position, string loc) : 
    TournamentMember(f, l, bd, new_age, nation, loc){
        this -> number = number;
        this -> foot = foot;
        this -> position = position;
        this -> goals = goals;
        cout << "Player Parametric Constructor" << endl;
}

Player::Player(const Player &p) : TournamentMember(p.get_fname(), p.get_lname(),
    p.get_dob(), p.getAge(), p.getNation(), p.getLoc()){
        number = p.getNumber();
        foot = p.getFoot();
        position = p.getPosition();
        goals = p.getGoals();
        cout << "Player Copy Constructor" << endl;
}

Player::~Player(){
    cout << "Player Destructor Called" << endl;
}

void Player::print_player() const{
    cout << "FIRST NAME: " << this->get_fname() << endl;
    cout << "LAST NAME: " << this->get_lname() << endl;
    cout << "D.O.B: " << this->get_dob() << endl;
    cout << "AGE: " << this->getAge() << endl;
    cout << "NATIONALITY: " << this->getNation() << endl;
    cout << "LOCATION: " << this->getLoc() << endl;
    cout << "NUMBER " << this->getNumber() << endl;
    cout << "FOOT: " << char(toupper(this->getFoot())) << endl;
    cout << "POSITION: " << this->getPosition() << endl;
    cout << "GOALS: " << this->getGoals() << endl;
}

void Player::inc_goals(){
    goals++;
}