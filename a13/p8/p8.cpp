/*	CH230 a13p8
	Muaaz Rajput
	murajput@jacobs-university.de*/

#include <iostream>
using namespace std;

// motor class
class Motor{
    public:
    Motor(){ // constucctor which throws string literal
        throw "This motor has problems";
    };
};

// car class with pointer to motor object
class Car{
    private:
    Motor *m;

    public:
    Car(){ //  dynamic allocation of motor pointer
        m = new Motor;       
    };
};

// garage class with pointer to car object
class Garage{
    private:
    Car *c;

    public:
    Garage(){ // garage constructor with try catch
        try{
            c = new Car;
        }
        catch(const char* err){
            // string literal thrown and caught in main
            throw "The car in this garage has problems with the motor.";
        }
    }
};

int main(){
    try{
        Garage g;
    }catch(const char* err){
        cerr << err << endl;
    }

    return 0;

}