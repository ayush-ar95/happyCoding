// In this program we will find prime factors of a given number.

#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int i)
{
    if (i == 2 || i == 3)
    {
        return true;
    }
    else if (i % 2 == 0 || i % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int j = 5; j <= sqrt(i); j = j + 6)
        {
            if (i % j == 0 || i % (j + 2) == 0)

            {
                return false;
            }
        }
        return true;
    }
}

void findPrimeFactor(int n) // time complexity: O(n2)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (checkPrime(i))
            {
                cout << i << endl;
            }
        }
    }
}

void naiveSoultion(int n) // time complexity: O(n2logn)
{
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << endl;
                x = x * i;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The prime factors are: " << endl;
    findPrimeFactor(n);
    cout << "The prime factors using naive solution are: " << endl;
    naiveSoultion(n);
    return 0;
}