/*
    in this program we will see inline function, default argument, constant argument.

    Inline functions are used to reduce the overhead of repetative function call (big functions that contain lots of line of code).
    we use "inline" keyword to make any function inline function. it is recommonded to make small functions as inline function becauses making the big functions as inline will increase the overhead instead of reducing the overhead.

    when we should not use inline functions:-
    1. when reccursion is used.
    2. when static variables are used.
    3. when loop and switch funtions are used.
    -----------------------------------------------------------------------------------------------------------------------------------------
    Default argument in a function is the value which is used when no value to that argument is passed on.
    default arguments should be written after compulsary arguments.
    -----------------------------------------------------------------------------------------------------------------------------------------
    Constant argument are the arguments which is used when we don't want to change the argument value through out the program.
    it is generally used with reference variable and pointers. "const" keyword is used.
*/

#include <iostream>

using namespace std;

inline int product(int a, int b) // here product is inline function it will be replaced at compilation wherever it is called.
{
    int c = a * b;
    return c;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int x, y;
    cout << "enter the value of a and b: " << endl;
    cin >> x >> y;
    cout << "the product is: " << product(x, y) << endl;

    int money = 100000;
    cout << "if you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << " Rs after 1 year " << endl;
    // here while calling the function moneyReceived only one parameter is passed, so it will take default value of factor argument.
    cout << "for VIP: if you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.9) << " Rs after 1 year" << endl;
    // here while calling the function moneyReceived only two parameter is passed,so it will take passed value of factor argument instead of default value.

    return 0;
}