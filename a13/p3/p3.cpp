/*  CH230 a13p3
	Muaaz Rajput
	murajput@jacobs-university.de*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int i, n;
	string name;
    string content;

	cin >> n;

    ofstream out("concatn.txt", ios::binary); // open output file in binary
	for (i = 0; i < n; i++){
		cin >>  name; // get name of file
		ifstream in(name); // open file from which content is to be read

        // if file does not exist or could not be opened
        // abandon program
        if (!in.is_open()){
            cout << "File does not exist or could not be opened." << endl;
            in.close();
            out.close();
            remove("concatn.txt");
            exit(1);
        }
        // copy content from input file to output file
        while(!in.eof()){
            in >> content;
            out << content;
	    }
        out << endl;
        in.close(); // close input file
    }
    out.close(); // close output file
    return 0;

}