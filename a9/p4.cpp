/*CH-230 a9p4
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>


int mycount(int a, int b){
    return b - a; // calculate and return the difference //
}

int mycount(char c, std::string s){
    unsigned int i, count = 0;

//loop over string, compare each char with c and increment count if needed//
    for (i = 0; i < s.length(); i++){
        if (s[i] == c)
            count++;
    }
    return count;
}

int main(){
    // function calls //
    std::cout << mycount(7, 3) << std::endl;
    std::cout << mycount('i', "this is a string") << std::endl;
}
