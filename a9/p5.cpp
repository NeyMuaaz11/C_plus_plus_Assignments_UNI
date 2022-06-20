/*CH-230 a9p5
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int number, guess = -1, count = 0;
    string name;
    
    // getting name from user //
    cout << "Enter Your Name: ";
    getline(cin, name);

    // generating random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));
    number = rand();
    number = (number % 100) + 1;

    // get user's guess
    cout << "Enter your guess: ";
    cin >> guess;
    count += 1;

    /* while loop to repeatedly get user's guess and 
        compare it with generated number and 
        printing hints accordingly, until user
        guesses correctly*/
    while(guess != number){
        if (guess > number)
            cout << "Too High!" << endl;
        else 
            cout << "Too Low!" << endl;

        cout << "Enter your guess: ";
        cin >> guess;
        count += 1;
    }  

    // printing congratulation message with users name //
    cout << "Congratulations " << name << ", you guessed the number in " << 
    count << " attempts!" << endl;

}