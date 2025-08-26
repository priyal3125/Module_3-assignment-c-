//  Factorial Calculation Using Recursion
//     oWrite a C++programthat calculates thefactorial of anumber using recursion.
//     oObjective: Understand recursion in functions.

#include <iostream>
using namespace std;
int fact(int n) ;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << fact(num) << endl;

    return 0;
}

int fact(int n) 
{
    if (n == 0 || n == 1)  
	{
		 return 1;
	} 
       
    else
        {
        	return n * fact(n - 1);
		}  
}


