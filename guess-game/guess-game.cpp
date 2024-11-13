/*
 * Program: Random Number Guessing Game
 * Description: This program generates a random number between 1 and 100 and asks the user
 *              to guess what it is. It provides feedback on whether the user's guess is
 *              too high or too low. The program continues prompting the user until they
 *              correctly guess the random number. The program also keeps track of the number
 *              of guesses and displays the total number of guesses when the correct number is guessed.
 *              - If the user's guess is higher than the random number, the program displays
 *                "Too high, try again."
 *              - If the user's guess is lower than the random number, the program displays
 *                "Too low, try again."
 *              - When the correct number is guessed, the program congratulates the user and
 *                displays the number of guesses made.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int guessCount = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (guess != randomNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        guessCount++;

        if (guess > randomNumber)
        {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low, try again." << endl;
        }
        else
        {
            cout << "Congratulations! You've guessed the right number!" << endl;
            cout << "It took you " << guessCount << " guesses." << endl;
        }
    }

    return 0;
}
