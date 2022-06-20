/*CH-230 a9p7
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>

using namespace std;


// swapping ints by reference //
void swapping(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// swapping floats by reference //
void swapping(float &x, float &y){
    float temp = x;
    x = y;
    y = temp;
}

// swapping strings by reference //
void swapping(const char *&one, const char *&two){
    const char *temp = one;
    one = two;
    two = temp;
}


int main(){
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "Before Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "After Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;
    return 0;


}

