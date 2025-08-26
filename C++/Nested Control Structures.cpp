//  Nested Control Structures
//    oWrite a programthatprints a right-angled triangle using stars (*)with a nested loop.
//    oObjective: Learn nestedcontrol structures

#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) 
	{           // outer loop ? rows
        for (int j = 1; j <= i; j++) 
		{          // inner loop ? columns
            cout << "* ";
        }
        cout << endl;  
    }

    return 0;
}

