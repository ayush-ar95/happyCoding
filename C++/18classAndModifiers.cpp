/*
    class are just like structures but in class data privacy is there unlike in structures. in structures any one can access any data from anywhere but in class only public data can be accessd by everyone but private data can only be accessed by the functions inside the class.
*/

#include <iostream>

using namespace std;

class test // class is declared.
{
private: // these are the private variables which can only be acessed by functions inside the class.
    int a, b, c;

public:
    int d, e; // these are the public variables which can be acessed by everyone in the program.

    void setData(int a, int b, int c); // we can write function definition either inside the class or outside the class both ways are vaild.
    void getData()                     // here we will write function definiton of 1st fun outside and 2nd fun inside the class.
    {
        cout << "the value of a is :" << a << endl;
        cout << "the value of b is :" << b << endl;
        cout << "the value of c is :" << c << endl;
        cout << "the value of d is :" << d << endl;
        cout << "the value of e is :" << e << endl;
    }
};

void test ::setData(int x, int y, int z) // way to define class function outside the class.
{
    a = x;
    b = y;
    c = z;
}

int main()
{
    test element;
    element.d = 10;
    element.e = 20;

    // element.a=1; this will give error as this is private data which can't be acessed by anyone except by class functions. so we will use it through funtions.

    element.setData(1, 2, 3); // this will set the data of element a,b,c.
    element.getData();        // this will display the data.

    return 0;
}