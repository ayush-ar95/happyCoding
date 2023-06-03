#include <iostream>

using namespace std;

template <class T>
class ayush
{
public:
    T data;
    ayush(T a)
    {
        data = a;
    }

    void display();
};

template <class T> // defining class member function outside the class.
void ayush<T>::display()
{
    cout << data << endl;
}

// function overloading ...

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T> //  templatised the overloaded function.
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func1() " << a << endl;
}

int main()
{
    ayush<int> a(5);
    cout << a.data << endl;

    ayush<float> b(5.7);
    cout << b.data << endl;

    b.display();

    func(4); // this can call two functions 1. func(int a) 2. func(T a) coz both functions do the same thing but func(int a) will be called coz exact match takes the hightest priority.
    func1(4);

    return 0;
}