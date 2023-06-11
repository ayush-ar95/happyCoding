// In this program we will find factorial of a given number.

#include <iostream>

using namespace std;

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int factorialRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorialRecursive(n - 1));
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "The factorial of the numbere usnig iterative method is: " << factorial(n) << endl;
    cout << "The factorial of the numbere usnig recursive method is: " << factorialRecursive(n) << endl;

    return 0;
}