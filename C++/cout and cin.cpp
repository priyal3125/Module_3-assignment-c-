// Basic Input/Output
//     oWrite a C++ program thataccepts user input for their name and age andthen
//     displays a personalized greeting.
//     oObjective: Practice input/output operations using cin and cout

#include<iostream>
using namespace std;
int main()
{
    string name;   
    int age;     

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Name is :" << name << endl;
    cout << "Age is :" << age << endl;

    return 0;
}

