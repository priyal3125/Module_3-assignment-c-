//  Variable Scope
//      oWrite a program thatdemonstrates the difference betweenlocal and global variables in C++. Use functions to show scope.
//      oObjective: Reinforce the concept of variable scope

#include <iostream>
using namespace std;

// Global variable
int num = 20;

void show() 
{
    cout << "Inside show, Global num = " << num << endl;  // 20 thse print
}

int main() 
{
    // Local variable
    int num = 40;

    cout << "Inside main, Local num = " << num << endl; //40 print thse
    cout << "Inside main, Global num = " << ::num << endl; //20 thse print 

    show();

    return 0;
}

