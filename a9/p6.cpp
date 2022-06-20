/*CH-230 a9p6
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>
#include <cctype>

using namespace std;

// function to return first positive even integer from array //
int myfirst(int *numbers, int size){
    int i = 0;
    for (i = 0; i < size; i++){
        if ((numbers[i] > 0) && (numbers[i] % 2 == 0))
            return numbers[i];
    }
    return -1;
}

// function to return first negative float with no fraction //
float myfirst(float *numbers, int size){
    int i = 0;
    for (i = 0; i < size; i++){
        if ((int(numbers[i]) == numbers [i]) && (numbers[i] < 0))
            return numbers[i];
    }
    return -1.1;
}

// function to return first consonant //
char myfirst(char *data, int size){
    int i = 0;
    for (i = 0; i < size; i++){
        if ((tolower(data[i]) != 'a') && (tolower(data[i]) != 'e') &&
            (tolower(data[i]) != 'i') && (tolower(data[i]) != 'o') &&
            (tolower(data[i]) != 'u'))
            return data[i];
    }
    return 0;
}



int main(){
    int inumbers[5] = {21, 31, 33, 43, 55};
    float fnumbers[5] = {1.1, 2.2, 3.3, -4.4, -5.6};
    char data[5] = {'a', 'e','i', 'o', 'z'};
    cout << myfirst(&inumbers[0], 5) << endl;
    cout << myfirst(&fnumbers[0], 5) << endl;
    cout << myfirst(&data[0], 5) << endl;
}
