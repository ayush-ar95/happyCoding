// In this code we will see an efficient algorithm to find the prime factor.
// time complexity : sqrt(n)

#include <iostream>

using namespace std;

void findPrimeFactor(int n)
{
    if (n <= 1)
    {
        cout << "No prime factor " << endl;
        return;
    }
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << endl;
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << endl;
            n = n / (i + 2);
        }
    }
    if (n > 3) // this will handle the last prime no (>3 coz 2 and 3 cases are handled seperatly) which is not divisible by any number.
        cout << n << endl;
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << "Prime factors are: " << endl;
    findPrimeFactor(n);
    return 0;
}