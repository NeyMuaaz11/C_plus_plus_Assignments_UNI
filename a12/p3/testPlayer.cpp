/*  CH230 a12p3
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

string TournamentMember::location;

int main(){
    // initialize sample data //
    char fname_one[] = "Muaaz", fname_two[] = "xyz";
    char lname_one[] = "Rajput", lname_two[] = "qwe";
    char dob_one[] = "03-04-2003", dob_two[] = "01-01-2001";
    int age_one = 18, age_two = 23;
    string nation = "Pakistani";
    int number_one = 11, number_two = 6;
    char foot_one = 'r', foot_two = 'l';
    string pos_one = "LW" , pos_two = "CDM" ;
    std::string newloc = "Hamburg", oldloc = "Bremen";

    // create players //
    Player a(&fname_one[0], &lname_one[0], &dob_one[0], age_one, nation,
     number_one, 0, foot_one, pos_one, oldloc);
    Player b(&fname_two[0], &lname_two[0], &dob_two[0], age_two, nation,
     number_two, 0, foot_two, pos_two, oldloc);
    Player d(a); // create copy of player a //

    a.print_player();
    cout << endl;
    b.print_player();
    cout << endl;
    d.print_player();
    cout << endl;

    // change location of each player //
    a.changeloc(newloc);
    b.changeloc(newloc);
    d.changeloc(newloc);

    a.print_player();
    cout << endl;
    b.print_player();
    cout << endl;
    d.print_player();
    cout << endl;
    
    return 0;
}