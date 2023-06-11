// In this program we will count the number of trailing zero's in the factorial of a number.

// this method is inefficient as the range of the factorial of a number is very large.
// another efficient method is written in next program 06.

#include <iostream>

using namespace std;

int countZero(int n)
{
    int count = 0;
    while ((n % 10) == 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }

    cout << "The factorial of the number is: " << fac << endl;
    return fac;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "The number of trailing zero's are: " << countZero(factorial(n)) << endl;

    return 0;
}