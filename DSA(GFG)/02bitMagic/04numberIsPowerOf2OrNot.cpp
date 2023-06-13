// In this program we will check that a given number is power of two or not.

#include <iostream>

using namespace std;

bool checkPower(float n)
{
    if (n == 0)
        return false;
    while (n >= 2)
    {
        n = n / 2;
    }
    if (n == 1)
        return true;
    else
        return false;
}

bool method2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}

int main()
{
    cout << "Enter a number: " << endl;
    float n;
    cin >> n;
    cout << "the number is power of 2: " << checkPower(n) << endl;
    cout << "the number is power of 2 using method2: " << method2(n) << endl;
    return 0;
}

/*
    Numbers with power of 2 has a property: no of set bit is always 1.
    we can use brian kerningam algorithm to count set bit and calculate it in O(1).
*/