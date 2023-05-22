/* In this program we will see call by value and call by reference
this program will swap two numbers using call by value and call by refrence.
*/

#include <iostream>

using namespace std;

void swapByValue(int, int);
void swapByRef(int *, int *);

int main()
{
    int x, y;
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter second number" << endl;
    cin >> y;
    cout << "values before swapping\t" << "\t" << x << "\t" << y << endl;
    swapByValue(x, y);
    cout << "values after call by value swapping\t" << "\t" << x << "\t" << y << endl;
    swapByRef(&x, &y);
    cout << "values after call by reference swapping\t" << "\t" << x << "\t" << y << endl;

    return 0;
}

void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapByRef(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}