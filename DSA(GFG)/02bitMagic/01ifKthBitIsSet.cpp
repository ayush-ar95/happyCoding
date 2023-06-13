// In this program we will check whether the kth bit in binary representation of a number is set(1) or not.

#include <iostream>

using namespace std;

bool checkBit(int n, int k)
{
    int check;
    for (int i = 0; i < k; i++)
    {
        check = (n % 2);
        n = n / 2;
    }
    if (check == 1)
        return true;
    else
        return false;
}

bool leftshit(int n, int k)
{
    if ((n & (1 << (k - 1))) != 0)
        return true;
    else
        return false;
}

bool rightshift(int n, int k)
{
    if (((n >> (k - 1)) & 1) != 0)
        return true;
    else
        return false;
}

int main()
{
    cout << "Enter the number and positon: " << endl;
    int n, k;
    cin >> n >> k;
    cout << k << " bit is set or not in " << n << " is: " << checkBit(n, k) << endl;
    cout << k << " bit is set or not using left shift operator in " << n << " is: " << leftshit(n, k) << endl;
    cout << k << " bit is set or not using right shift operator in " << n << " is: " << rightshift(n, k) << endl;
    return 0;
}