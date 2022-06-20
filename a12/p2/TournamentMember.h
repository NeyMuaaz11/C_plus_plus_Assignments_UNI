#include <iostream>
#include <cstring>
using namespace std;
class TournamentMember{
    private:
    char *fname, *lname, *dob;
    unsigned int age;
    std::string nationality;
    static std::string location;

    public:
    TournamentMember(); // default constructor
    TournamentMember(char*, char*, char*, int, std::string); // parametric
    TournamentMember(const TournamentMember&); // copy
    ~TournamentMember(); // destructor
    // getter methods //
    char* get_fname() const;
    char* get_lname() const;
    char* get_dob() const;
    int getAge() const;
    std::string getNation() const;
    // setter methods //
    void set_fname(char*);
    void set_lname(char*);
    void set_dob(char*);
    void setAge(int);
    void setNation(std::string);
    // service methods //
    void print() const;
    static void changeloc(string newloc){
        location = newloc;
    }
};




/*********************Getter methods********************/
inline char* TournamentMember::get_fname() const{
    return fname;
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
