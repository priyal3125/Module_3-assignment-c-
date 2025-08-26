// Simple Calculator Using Functions
//   oWrite a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide). 
//   The mainfunctionshould call these basedonuser input.
//   oObjective: Practice defining and using functions inC++

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2, choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) 
	{
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}

