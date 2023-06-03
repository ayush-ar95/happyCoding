#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float> // either we can use this default template or we can pass our own datatype while calling.
class ayush
{
public:
    T1 a;
    T2 b;
    ayush(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    ayush<> a(4, 6.4); // using the default template.
    a.display();
    cout << endl;
    ayush<float, int> b(4.6, 6); // using the user defined template.
    b.display();
    return 0;
}