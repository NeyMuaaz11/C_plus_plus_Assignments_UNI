/*CH-230 a9p3
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>

float abs(float number); // function prototype //

int main(){
    float number;
    std::cin >> number; // get input for number //
    std::cout << abs(number) << std::endl; //print the value returned by abs//

}


float abs(float number){
    // if-statement to convert number into absolute value //
    if (number < 0)
        return -number;
    else 
        return number;
}