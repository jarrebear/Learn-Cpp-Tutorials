// Question #3

// Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100. The user is given 7 tries to guess the number.

// If the user does not guess the correct number, the program should tell them whether they guessed too high or too low. If the user guesses the
//  right number, the program should tell them they won. If they run out of guesses, the program should tell them they lost, and what the correct 
//  number is. At the end of the game, the user should be asked if they want to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.

// For this quiz, assume the user enters a valid number.

// Use the Random.h header from 8.15 -- Global random numbers (Random.h).

// Here’s what your output should look like:

// Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
// Guess #1: 64
// Your guess is too high.
// Guess #2: 32
// Your guess is too low.
// Guess #3: 54
// Your guess is too high.
// Guess #4: 51
// Correct! You win!
// Would you like to play again (y/n)? y
// Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
// Guess #1: 64
// Your guess is too high.
// Guess #2: 32
// Your guess is too low.
// Guess #3: 54
// Your guess is too high.
// Guess #4: 51
// Your guess is too high.
// Guess #5: 36
// Your guess is too low.
// Guess #6: 45
// Your guess is too low.
// Guess #7: 48
// Your guess is too low.
// Sorry, you lose. The correct number was 49.
// Would you like to play again (y/n)? q
// Would you like to play again (y/n)? n
// Thank you for playing.

#include <iostream>
#include "Random.h"

int main()
{   
    constexpr int minValue {1};
    constexpr int maxValue {100};
    constexpr int numGuesses {7};


    while (true)
    {
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have " << numGuesses << " tries to quess what it is.\n";
        int randomNumber { Random::get(minValue, maxValue)};
        for (int i {1}; i<=numGuesses; ++i)
        {
            int userGuess {};
            std::cout << "Guess #" << i << ": ";
            std::cin >> userGuess;
            if (userGuess > randomNumber)
            {
                std::cout << "Your guess is too high.\n";
            }
            else if (userGuess < randomNumber)
            {
                std::cout << "Your guess is too low.\n";
            }
            else
            {
                std::cout << "Correct! you win!\n";
                break;
            }

            if (i == 7)
                std::cout << "Sorry, you lose. The correct number was " << randomNumber << ".\n";
        }

        char cont {};
        
        while (true)
        {
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> cont;
            if (cont == 'y' || cont == 'n')
                break;
        }
        
        if (cont == 'n')
            break;
        
    }
    return 0;
}
