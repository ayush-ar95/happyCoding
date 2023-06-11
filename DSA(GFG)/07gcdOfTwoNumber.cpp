// In this program we find greatest common divisior of two number.

#include <iostream>

using namespace std;

int findGCD(int x, int y) // time complexity will be : O(log(n))
{
    if (x == 0)
    {
        return y;
    }
    else if (y == 0)
    {
        return x;
    }
    else
    {
        return findGCD(y % x, x);
    }
}

int gcdWithoutRecursion(int x, int y) // time complextiy of this is: O(min(x,y))
{
    int var = min(x, y);
    while (var > 0)
    {
        if ((x % var == 0) && (y % var == 0))
        {
            break;
        }
        var--;
    }
    return var;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "GCD is: " << findGCD(a, b) << endl;
    cout << "gcd without recursion is: " << gcdWithoutRecursion(a, b) << endl;
    return 0;
}