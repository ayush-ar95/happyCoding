// In this program we will see Sieve of eratosthenes algorithm to find prime numbers before a given number.

#include <iostream>

using namespace std;

void prime(int n)
{
    int a[n + 1];
    for (int i = 2; i <= n; i++)
    {
        a[i] = 1;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (a[i] == 1)
        {
            int j = 2;
            for (; (i * j) <= n; j++)
            {
                a[i * j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Prime numbers are: " << endl;
    prime(n);
    return 0;
}

//  prime no btw 1 and 100: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.