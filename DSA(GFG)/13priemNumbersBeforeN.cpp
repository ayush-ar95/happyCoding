// In this program we will print all prime number before and equal to the given number.

// time complexity: O(n*sqrt(n))

#include <iostream>

using namespace std;

bool checkPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void prime(int n) // time complexity: (n * sqrt(n))
{
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Prime number befor and after the given number is: " << endl;
    prime(n);
    return 0;
}