// Grade Calculator
//     oWrite a C++ program thattakes a student�s marks as input and calculates the grade
//     basedonif-else conditions.
//    oObjective: Practice conditional statements (if-else)


#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 90) 
	{
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75) 
	{
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) 
	{
        cout << "Grade: C" << endl;
    }
    else if (marks >= 40) 
	{
        cout << "Grade: D" << endl;
    }
    else 
	{
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

