// In this program we will be given two number and we will computer power (one number raise to the other).

#include <iostream>

using namespace std;

int power(int x, int n)
{
    int pow = 1;
    for (int i = 1; i <= n; i++)
    {
        pow = pow * x;
    }
    return pow;
}

int main()
{
    int x, n;
    cout << "Enter two number: " << endl;
    cin >> x >> n;
    cout << x << " raise to the power of " << n << " is: " << power(x, n) << endl;
    return 0;
}