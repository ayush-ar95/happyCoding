/*
    this programs print multiplication table of the given number;
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    cout << "the table of " << n << " is: " << endl
         << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " multiply " << i << " = " << n * i << endl;
    }

    return 0;
}