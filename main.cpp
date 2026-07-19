#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "=====================================\n";
    cout << "      GUESS THE NUMBER GAME\n";
    cout << "=====================================\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try again.\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try again.\n\n";
        }
        else {
            cout << "\nCongratulations! You guessed the correct number.\n";
            cout << "Number: " << secretNumber << endl;
            cout << "Attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
}