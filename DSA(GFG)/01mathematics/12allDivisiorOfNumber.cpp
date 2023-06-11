// In this program we will find factors of a number.

#include <iostream>

using namespace std;

void findFactor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

void efficientFactor(int n) // this will print all divisior but not in order.
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (i != (n / i))
            {
                cout << (n / i) << endl;
            }
        }
    }
}

void shortedEfficientFactor(int n) // this will print all the divisior but in shorted order.
{
    int i = 1;
    for (; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            if (i != (n / i))
            {
                cout << (n / i) << endl;
            }
        }
    }
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << "The factors are: " << endl;
    findFactor(n);
    cout << "The factors are using efficient method: " << endl;
    efficientFactor(n);
    cout << "The factors are using shorted efficient method: " << endl;
    shortedEfficientFactor(n);
    return 0;
}