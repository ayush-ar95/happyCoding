#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;    // creating a pointer of an object.
    (*ptr).setData(1, 20); // using the pointer to access the public member of the object.
    (*ptr).getData();      // using the pointer to access the public member of the object.

    // another way of creating (dynamically) the object and its pointer.
    Complex *p = new Complex;
    (*p).setData(10, 200);
    (*p).getData();

    // arrow operator :- it is used in place of '*' and '.'
    p->setData(100, 2000);
    p->getData();

    // array of objects
    Complex *pt = new Complex[4];

    return 0;
}