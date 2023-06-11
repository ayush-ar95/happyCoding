// In this program we will compute power with O(1) auxiliary space.
// Time complexity: O(logn)
// Auxiliary space: O(1)

#include <iostream>

using namespace std;

int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0) // if( n & 1 ) can be optimised further.
            res = res * x;
        x = x * x;
        n = n / 2; // n >> 1; can be optimised further.
    }
    return res;
}

int main()
{
    cout << "Enter two number: " << endl;
    int x, n;
    cin >> x >> n;
    cout << x << " raise to the power of " << n << " is: " << power(x, n) << endl;
    return 0;
}