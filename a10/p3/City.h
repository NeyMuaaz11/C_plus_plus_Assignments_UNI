#include <iostream>

using namespace std;

class City{
    private:
    // private properties of City //
    string mayor, name;
    int population;
    double area;

    public:
    // setter methods for each property //
    void setMayor(string newmayor);
    void setName(string newname);
    void setPop(int newpop);
    void setArea(double area);
    // getter methods for each property //
    string getName();
    string getMayor();
    int getPop();
    double getArea();
    // service method //
    void print();
    
};