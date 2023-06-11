// In this program we will check a number is prime of not.

#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int x) // time complexity : O(squar root (n))
{
    if (x == 1)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if ((x % i) == 0)
            {
                return false;
            }
        }
        return true;
    }
}

bool efficientCheckPrime(int x)
{
    if (x == 1)
    {
        cout << "it is neither prime nor composite " << endl;
        return false;
    }
    else if (x == 2 || x == 3)
    {
        return true;
    }
    else if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i <= sqrt(x); i = i + 6)
        {
            if (x % i == 0 || x % (i + 2) == 0)
                return false;
        }
        return true;
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The number is prime: " << checkPrime(n) << endl;
    cout << "The number is prime using efficient method: " << efficientCheckPrime(n) << endl;
    return 0;
}