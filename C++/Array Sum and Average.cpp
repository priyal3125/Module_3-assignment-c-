// Array Sum and Average
//   oWrite a C++ program thataccepts an array ofintegers, calculates the sum and average, and displays the results.
//   oObjective: Understandbasicarray manipulation.


#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];  
    int sum = 0;

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
        sum += arr[i];  
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

