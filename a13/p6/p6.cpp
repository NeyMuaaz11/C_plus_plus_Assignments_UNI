/*	CH230 a13p6
	Muaaz Rajput
	murajput@jacobs-university.de*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(20,8); // use parametric constructor from vector class

    try{
        cout << v.at(21) << endl; // try accessing a non existing element
    }catch(const out_of_range& err){ // catch the exception and handele it
        cerr << "ERROR: " << err.what() << endl;
    }
    return 0;
}