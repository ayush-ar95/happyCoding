/*

Create 2 classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your choice and displays the results using another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?

*/

#include <iostream>

using namespace std;

int a, b;

class simpleCalculator
{
public:
    float simpleUtility()
    {
        int choice;
        cout << "Enter the operation choice: " << endl
             << "1 for additon" << endl
             << "2 for substraction" << endl
             << "3 for multiplication" << endl
             << "4 for division" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            return (a + b);
            break;
        case 2:
            return (a - b);
            break;
        case 3:
            return (a * b);
            break;
        case 4:
            return (a / b);
            break;
        default:
            cout << "plz enter a valid choice" << endl;
            return 0;
        }
    }
};

class scientificCalculator
{
public:
    float scientificUtility()
    {
        int choice;
        cout << "Enter the operation choice: " << endl
             << "1 for additon" << endl
             << "2 for substraction" << endl
             << "3 for multiplication" << endl
             << "4 for division" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            return (a + b);
            break;
        case 2:
            return (a - b);
            break;
        case 3:
            return (a * b);
            break;
        case 4:
            return (a / b);
            break;
        default:
            cout << "plz enter a valid choice" << endl;
            return 0;
        }
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
    float res;

public:
    void display();
    void setData(float, float);
    void calculator();
};

void hybridCalculator ::setData(float x, float y)
{
    a = x;
    b = y;
}

void hybridCalculator ::display()
{
    cout << "the result is: " << res << endl;
}

void hybridCalculator ::calculator()
{
    int choice;
    cout << "which calculator u want to use:" << endl
         << "press 1 for simple claculator" << endl
         << "press 2 for scientific calculator" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        res = simpleUtility();
        break;

    case 2:
        res = scientificUtility();
        break;

    default:
        cout << "Enter a valid choice" << endl;
    }
}

int main()
{
    hybridCalculator c;
    c.setData(10, 10);
    c.calculator();
    c.display();
    return 0;
}