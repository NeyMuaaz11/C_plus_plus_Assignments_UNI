#include <iostream>
#include "TournamentMember.h"

int main(){
    TournamentMember a;
    char lname[36] = "Rajput";
    char dob[11] = "03-04-2003";
    char fname[36] = "Muaaz";
    std::string nation = "Pakistani";
    TournamentMember b(&fname[0], &lname[0], &dob[0], 18, nation);
    TournamentMember c(b);
    
    a.print();
    b.print();
    c.print();
}