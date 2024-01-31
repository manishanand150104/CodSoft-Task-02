#include <iostream>

using namespace std;

// Function to perform addition
double add(double a, double b)
{
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function to perform division
double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cerr << "Error: Cannot divide by zero." << endl;
        return 0; // Returning 0 as an indication of error
    }
}

int main()
{
    char operation;
    double operand1, operand2;

    cout << "Simple Calculator" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> operand1 >> operand2;

    switch (operation)
    {
    case '+':
        cout << operand1 << " + " << operand2 << " = " << add(operand1, operand2) << endl;
        break;
    case '-':
        cout << operand1 << " - " << operand2 << " = " << subtract(operand1, operand2) << endl;
        break;
    case '*':
        cout << operand1 << " * " << operand2 << " = " << multiply(operand1, operand2) << endl;
        break;
    case '/':
        cout << operand1 << " / " << operand2 << " = " << divide(operand1, operand2) << endl;
        break;
    default:
        cerr << "Error: Invalid operation." << endl;
        break;
    }

    return 0;
}
