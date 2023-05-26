// parameterized constructor and default constructor.

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    // complex(void);  default constructor.
    complex(int, int); // parameterized constructor.

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

// complex :: complex(void)  // this is default constructor as it takes no parameter.
// {
//     a=0;
//     b=0;
// }

complex ::complex(int x, int y) // this is parameterized constructor as it take 2 parameters. there is two way we can pass values to parameterized constructor 1. Impilicit call.     2. Explicit call.
{
    a = x;
    b = y;
}

int main()
{
    // this is impilicit calling of parameterized constructor.
    complex a(4, 6);
    a.printNumber();

    // this is explicit calling of parameterized constructor.
    complex b = complex(5, 7);
    b.printNumber();

    return 0;
}