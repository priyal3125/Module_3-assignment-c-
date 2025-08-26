//  Variables and Constants
//     oWrite a C++ program that demonstratesthe use of variables andconstants. Create
//     variables of different data types and perform operations on them.
//     oObjective: Understand the difference between variables and constant

#include<iostream>
using namespace std;
int main()
{
    const int PI = 3;

    int a = 5;
    int b = 10;

    cout << "Variable a = " << a << endl;
    cout << "Variable b = " << b << endl;

    a = a + b;

    cout << "Total = " << a << endl;

    int area = PI * b * b;
    cout << "Area of circle = " << area << endl;

    return 0;
}

