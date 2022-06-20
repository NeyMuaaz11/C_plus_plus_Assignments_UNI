/*	CH230 a13p7
	Muaaz Rajput
	murajput@jacobs-university.de*/

#include <iostream>
using namespace std;

// class definition
class OwnException : public exception{
    private:
    string error; // stores error message
    
    public:
    OwnException(string s){ // parametric constructor
        error = s;
    }
    void what(){
        cout << "Own Exception\n";
    }
};

// function using switch to throw appropriate types
void func1(int a){
    switch (a)
    {
    case 1:
            throw 'a';
        break;

    case 2:
            throw 12;
        break;

    case 3:
            throw true;
        break;

    default:
        throw OwnException("Default case exception");
        break;
    }
}

int main(){
    
    // for loop to call function with different parameters
    // and 4 catch block to handle appropriate exceptions
    for(int i = 1; i < 5; i++){
        try{
            func1(i);
        }
        catch(const char err){
            cerr << "Caught in main: " << err << endl;
        }
        catch(const int err){
            cerr << "Caught in main: " << err << endl;
        }
        catch(const bool err){
            cerr << "Caught in main: " << err << endl;
        }
        catch(OwnException& err){
            cerr << "Caught in main: ";
            err.what();
        }
    }
    return 0;
}