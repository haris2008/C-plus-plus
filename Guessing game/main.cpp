#include <iostream>
using namespace std;

int main() {
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    cout << "Guess the secret number!" << endl;

    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You lost! The secret number was " << secretNum << endl;
    } else {
        cout << "You Win! " ;
        cout << "The correct number is " <<secretNum<<endl;
    }

    return 0;
}
