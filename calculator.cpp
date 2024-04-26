#include <bits/stdc++.h>
using namespace std;

void print(int num1, int num2, int operation)
{
    if (operation == 1)
    {
        cout << a << " + " << b << " = " << num1 + num2 << endl;
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        cout << " + ";
        if (num2 > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
        cout << " = ";
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        if ((num1 + num2) > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
    }
    else if (operation == 2)
    {
        cout << a << " - " << b << " = " << num1 - num2 << endl;
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        cout << " - ";
        if (num2 > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
        cout << " = ";
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        if ((num1 - num2) > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
    }
    else if (operation == 3)
    {
        cout << a << " * " << b << " = " << num1 * num2 << endl;
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        cout << " * ";
        if (num2 > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
        cout << " = ";
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        if ((num1 * num2) > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
    }
    else
    {
        cout << a << " / " << b << " = " << num1 / num2 << endl;
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        cout << " / ";
        if (num2 > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
        cout << " = ";
        cout << "(";
        if (num1 % 2 == 0)
        {
            cout << "Even; ";
        }
        else
        {
            cout << "Odd; ";
        }
        if ((num1 / num2) > 0)
        {
            cout << "Positive;)";
        }
        else
        {
            cout << "Negative;)";
        }
    }
}

void addition(int num1, int num2)
{
    cout << "Sum of " << a << " " << b << " = " << a + b << endl;
    return;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "\nEnter number 2: ";
    cin >> num2;

    char operation;
    cout << "\nEnter Operator: ";
    cin >> operation;
    cout << endl;

    switch
    {
    case ('+') {
        addition(num1, num2);
        break;
    } case ('-') {
        subsitutioin(num1, num2);
        break;
    } case ('*') {
        multiplication(num1, num2);
        break;
    } case ('/') {
        division(num1, num2);
        break;
    } default:
        cout << "Invalid operation" << endl;
    }
    return 0;
}