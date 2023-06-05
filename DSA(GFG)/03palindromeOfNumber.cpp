// In this problem we will check whether a given number is palindorme or not.

#include <iostream>

using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10;
        rev = rev + (n % 10);
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n, rev;
    cout << "Enter the number: " << endl;
    cin >> n;
    rev = reverse(n);
    cout << "The reverse is: " << rev << endl;

    if (n == rev)
    {
        cout << "The number is a palindorme " << endl;
    }
    else
    {
        cout << "The number is not a palindorme " << endl;
    }

    return 0;
}