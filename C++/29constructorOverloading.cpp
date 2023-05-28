/* In this program we will use constructor overloading.
    Making multiple constructor in the same class is called as constructor overloadig.
 */

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex() // default constructor.
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y) // parameterized constructor with 2 parameters.
    {
        a = x;
        b = y;
    }

    complex(int x) // parameterized constructor with 1 parameter.
    {
        a = x;
        b = 0;
    }

    void printNumber() // function that will print your number.
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(6,1);
    c1.printNumber();

    complex c2(4);
    c2.printNumber();

    complex c3;
    c3.printNumber();

    return 0;
}