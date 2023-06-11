// In this program we will see sieve of eratosthenes using vector.

// time complexity: O(nloglogn)

#include <iostream>

using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;
    cout << "The prime numbers are: " << endl;
    sieve(n);
    return 0;
}