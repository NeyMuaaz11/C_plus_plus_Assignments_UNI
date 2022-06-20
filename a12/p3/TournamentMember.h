#include <iostream>
#include <cstring>
using namespace std;

class TournamentMember{
    private:
    char *fname, *lname, *dob;
    unsigned int age;
    string nationality;
    static string location;

    public:
    TournamentMember(); // default constructor
    TournamentMember(char*, char*, char*, int,
     string, string = "N/A"); // parametric
    TournamentMember(const TournamentMember&); // copy
    ~TournamentMember(); // destructor
    // getter methods //
    char* get_fname() const;
    char* get_lname() const;
    char* get_dob() const;
    int getAge() const;
    string getNation() const;
    string getLoc() const;
    // setter methods //
    void set_fname(char*);
    void set_lname(char*);
    void set_dob(char*);
    void setAge(int);
    void setLoc(string);
    void setNation(string);
    // service methods //
    void print() const;
    void changeloc(string);
};



/*********************Getter methods********************/
inline char* TournamentMember::get_fname() const{
    return fname;
}

inline string TournamentMember::getLoc() const{
    return location;
}

inline char* TournamentMember::get_lname() const{
    return lname;
}

inline char* TournamentMember::get_dob() const{
    return dob;
}

inline int TournamentMember::getAge() const{
    return age;
}

inline string TournamentMember::getNation() const{
    return nationality;
}
/*******************************************************/

/*********************Setter methods********************/
inline void TournamentMember::set_fname(char* n){
    strncpy(fname, n, 35);
}

inline void TournamentMember::setLoc(string location){
    this->location = location;
}

inline void TournamentMember::set_lname(char* n){
    strncpy(lname, n, 36);
}

inline void TournamentMember::set_dob(char* n){
    strncpy(dob, n, 11);
}

inline void TournamentMember::setAge(int new_age){
    age = new_age;
}

inline void TournamentMember::setNation(string nation){
    nationality = nation;
}

/*******************************************************/


// PLAYER CLASS //
class Player : public TournamentMember{
    private:
    int number, goals;
    char foot;
    string position;
    
    public:
    Player(); // default constructor
    Player(const Player&); // copy
    Player(char*, char*, char*, int, string, 
        int, int, char, string, string = "N/A"); // parametric
    ~Player();// destructor
    // setter methods //
    void setNumber(int);
    void setFoot(char);
    void setPosition(string);
    //getter methods //
    int getNumber() const;
    char getFoot() const;
    string getPosition() const;
    int getGoals() const;
    // service methods //
    void print_player() const;
    void inc_goals();

};


/*********************Setter methods********************/
inline void Player::setNumber(int number){
    this -> number = number;
}

inline void Player::setFoot(char foot){
    this -> foot = foot;
}

inline void Player::setPosition(string position){
    this -> position = position;
}
/*******************************************************/

/*********************Getter methods********************/
inline int Player::getNumber() const{
    return number;
}

inline char Player::getFoot() const{
    return foot;
}

inline string Player::getPosition() const{
    return position;
}

inline int Player::getGoals() const{
    return goals;
}


/*******************************************************/