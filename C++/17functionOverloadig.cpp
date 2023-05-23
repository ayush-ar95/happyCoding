/*
    Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.
*/

#include <iostream>

using namespace std;

int sum(int x, int y) // here 2 funcions are made with same name but different arguments this is called as funciton overloading.
{
    return (x + y);
}

int sum(int x, int y, int z)
{
    return (x + y + z);
}

int main()
{
    int a, b, c;
    cout << "enter two number for sum " << endl;
    cin >> a >> b;
    cout << "the sum of " << a << " and " << b << " is: " << sum(a, b) << endl;
    cout << "enter three number for sum " << endl;
    cin >> a >> b >> c;
    cout << "the sum of " << a << "," << b << " and " << c << " is: " << sum(a, b, c) << endl;

    return 0;
}
