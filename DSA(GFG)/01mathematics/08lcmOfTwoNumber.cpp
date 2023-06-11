// In this program we will find lowest common multiple of two number.

#include <iostream>

using namespace std;

int findLCM(int x, int y) // time complexity: O(xy)
{
    int var = max(x, y);
    while ((var % x != 0) || (var % y != 0))
    {
        var++;
    }
    return var;
}

int GCD(int x, int y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    else
        return (GCD(y % x, x));
}

/*
    effiecient way to find LCM is by using the formula:
                a*b= LCM(a,b)* GCD(a,b);
*/

int efficientLCM(int x, int y) // time complexity : O(log(n))
{
    cout << endl
         << "GCD is:" << GCD(x, y) << endl;
    int lcm;
    lcm = (x * y) / GCD(x, y);
    return lcm;
}

int main()
{
    int a, b;
    cout << "Enter two number: " << endl;
    cin >> a >> b;
    cout << "LCM of these number is: " << findLCM(a, b) << endl;
    cout << "LCM of these number using efficeint way is: " << efficientLCM(a, b) << endl;
    return 0;
}