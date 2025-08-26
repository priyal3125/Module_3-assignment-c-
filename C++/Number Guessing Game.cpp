//  Number Guessing Game
//      oWrite a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess 
//      is too high or too low. Use loops to allow the user multiple attempts.
//      oObjective: Understandwhileloops and conditional logic

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int num, guess;
    srand(time(NULL));                 
    num = rand() % 100 + 1 ;         // % 100 hoie khali to series 0-99 aave and +1 hoie to 1-100 aave   

    cout << "I am thinking of a number between 1 to 100..." << endl;

    do {
        cout << "Write a number: ";
        cin >> guess;

        if (num < guess) 
		{
            cout << "Your guess is too high!" << endl;
        }
        else if (num > guess) 
		{
            cout << "Your guess is too low!" << endl;
        }
        else 
		{
            cout << "Woooooooooh! You guessed it correct :)" << endl;
        }

    } while (num != guess);

    return 0;
}

