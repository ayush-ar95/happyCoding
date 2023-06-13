// In this program we will implement Brian Kerningam Algorithm to count number of 1's in binary representation of a number.

#include <iostream>

using namespace std;

int setcount(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;
    cout << "Number of set bits are: " << setcount(n) << endl;
    return 0;
}