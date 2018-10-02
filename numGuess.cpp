/***********************************************
** Author:      Glenn Kiefer
** Date:        04/18/2018
** Description: This program will prompt the user
**              to enter a value. The program will
**              then return whether or not the
**              following inputted values match
**              the original entry.
*************************************************/

#include <iostream>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
    double targetNum, playerGuess;
    int count=1;
    
    // Prompt user to enter target number 
    cout << "Enter the number for the player to guess." << endl;
    cin >> targetNum;
    // Have second player enter number to guess
    cout << "Enter your guess." << endl;
    cin >> playerGuess;
    // Cycle through loop with conditional relation at end
    do 
    {   
        if (playerGuess>targetNum)
            {
                cout << "Too high - try again." << endl;
                cin >> playerGuess;
            }
        else if (playerGuess<targetNum)
            {
                cout << "Too low - try again." << endl;
                cin >> playerGuess;
            }
            count=count+1;
    }
    while (playerGuess != targetNum);
    // Output given if guess is correct
    cout << "You guessed it in " << count << " tries." << endl;
    return 0;
}
