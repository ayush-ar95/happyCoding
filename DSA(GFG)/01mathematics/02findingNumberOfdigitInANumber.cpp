// in this program we will find the number of digits in a given number;

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digit in number is: " << count << endl;

    return 0;
}