// here we will see different size of float data type

#include <iostream>

using namespace std;

int main()
{
    float a = 34.4F;
    long double b = 34.4L;
    cout << "The size of 34.4 is: " << sizeof(34.4) << endl; // here we will see the dafault size of float is size of long double.
    cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;
    cout << "The value of a is: " << a << endl << "The value of b is: " << b << endl;

    return 0;
}