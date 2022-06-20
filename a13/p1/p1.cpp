/*  CH230 a13p1
    Muaaz Rajput
    murajput@jacobs-university.de*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    string name;
    string txt = "_copy.txt";
    char buff[256];

    cin >> name; // get name of file
    
    // create variables for input and output files
    ifstream in(name);
    ofstream out(name.replace(name.length() - 4, 4, txt));

    // loop, read from first, and write into second until end of first file
    while(!in.eof()){
        in.getline(buff, 256);
        out << buff << endl;
        cout << buff << endl;
    }

    return 0;

}