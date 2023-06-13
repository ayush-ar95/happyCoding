// In this program we will count number of 1's in binary representation of a number.

#include <iostream>

using namespace std;

int count(int n) // time complexity: O(total no of bits in n).
{
    int count = 0;
    while (n > 0)
    {
        if ((n % 2) == 1) // if((n&1)==1)
        {
            count++;
            n = n / 2; // n=n>>1
        }
        else
        {
            n = n / 2;
        }
    }
    return count;
}

int main()
{
    cout << "enter a number: " << endl;
    int n;
    cin >> n;
    cout << " count of set bits are: " << count(n) << endl;
    return 0;
}