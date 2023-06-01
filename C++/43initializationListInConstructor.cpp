/*
    Syntax for initialization list in constructor:
    constructor (argument-list) : initilization-section
    {
        assignment + other code;
    }

example :-

    class Test
    {
        int a;
        int b;
        public:
            Test(int i, int j) : a(i), b(j) -----> this will assign the value of 'i' to 'a' and value of 'j' to 'b'
            {
                constructor body:
            }
    };

*/

#include <iostream>

using namespace std;

class Test
{
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j) case 1
    // Test(int i, int j) : a(i), b(i + j) case 2
    // Test(int i, int j) : a(i), b(2 * j) case 3
    // Test(int i, int j) : a(i), b(a + j) case 4
    Test(int i, int j) : b(j), a(i + b) // case 5 --> field 'b' is uninitialized when used here so it will return a garbage value.
    {
        cout << "Constructor is executed " << endl;
        cout << "The value of 'a' is: " << a << endl;
        cout << "The value of 'b' is: " << b << endl;
    }
};

int main()
{
    Test t(10, 20);
    return 0;
}