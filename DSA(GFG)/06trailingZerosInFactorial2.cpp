// here is a efficient method of countig number of trailing zero's in a factorial of a number.

#include <iostream>

using namespace std;

int trailingZero(int n)
{
    int count = 0;
    while (n > 5)
    {
        count = count + (int)(n / 5);
        n = (n / 5);
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "number of trailing zero's are: " << trailingZero(n) << endl;

    return 0;
}