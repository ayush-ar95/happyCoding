/* In this program we will see recursive functions */

#include <iostream>

using namespace std;

int factorial(int x) // this is the recursive function.
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return (x * factorial(x - 1)); // here this function is calling itself.
}

int fibonacci(int x) // this is the fibonacci function.
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    return (fibonacci(x - 1) + fibonacci(x - 2)); // here this function is calling itself.
}

int main()
{
    int a;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "the factorial of " << a << " is: " << factorial(a) << endl;
    cout << "the fibonacci of " << a << " is: " << fibonacci(a) << endl;

    return 0;
}