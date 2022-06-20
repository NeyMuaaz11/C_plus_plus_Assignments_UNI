/*CH-230 a9p9
    Muaaz Rajput
    murajput@jacobs-university.de */

#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

// function prototypes //
void choose_word(string *word, string *words);
void swap_print(string *word);

int main(){
    string *words, word, guess;
    int count = 0;
    char again;

    // dynamic allocation and initialization of array of words to choose from //
    words = new string[17] {"computer", "television", "keyboard", "laptop",
    "mouse", "alarm", "rent", "threat", "annual", "flat", "sale", "steam",
    "cultural", "month", "warm", "tail", "execute"};

    /* do-while loop to keep playing game until user
     says enters no*/
    do{
        // function calls to choose a word and replace vowels with _ //
        choose_word(&word, &words[0]);
        swap_print(&word);
        
        count = 0;
        cout << "Enter Your Guess: ";
        cin >> guess;
        count += 1; // increment number of attempts //

        /* while loop to keep getting guesses from user
         until they guess correctly*/
        while (guess != word){
            if (strcasecmp(guess.c_str(), "quit") == 0)
                return 0;
            cout << "Incorrect! Try again" << endl;
            cout << "Enter Your Guess: ";
            cin >> guess;
            count += 1;
        }
        cout << "Congratulations! You guessed the word in " << count << 
        " attempt(s)!" << endl;
        cout << "Do you wish to play again?(y/n)" << endl;
        cin >> again;
    }while(tolower(again) != 'n');

    delete [] words; // deallocation of array //
    return 0;


}

void choose_word(string *word, string *words){
    int number;

    // generate random number and choose word from array //
    srand(static_cast<unsigned int>(time(0)));
    number = rand();
    number = number % 17;
    *word = words[number];
}

void swap_print(string *data){
    unsigned int i;
    string word = *data;
    
    // loop over word and swap each vowel with _ //
    for (i = 0; i < word.length(); i++){
        if ((tolower(word[i]) == 'a') || (tolower(word[i]) == 'e') ||
            (tolower(word[i]) == 'i') || (tolower(word[i]) == 'o') ||
            (tolower(word[i]) == 'u'))
            word[i] = '_';
    }
    
    cout << word << endl;

}