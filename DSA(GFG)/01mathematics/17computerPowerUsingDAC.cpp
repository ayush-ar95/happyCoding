// This program we will compute power of number raise to other using divide and conqure approach.
// Time complexity: O(logn)
// Auxiliary space: O(logn)

#include <iostream>
#include <cmath>

using namespace std;

int power(int x, int n)
{
    int a, b, mid;
    if (n == 1)
    {
        return x;
    }
    else
    {
        mid = floor(n / 2);
        a = power(x, mid);
        b = a * a;
        if (n % 2 == 0)
            return b;
        else
            return (x * b);
    }
}

int main()
{
    cout << "Enter two number: " << endl;
    int x, n;
    cin >> x >> n;
    cout << x << " raise to the power of " << n << " is: " << power(x, n) << endl;
}