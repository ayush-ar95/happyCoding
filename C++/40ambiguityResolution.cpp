/*
   In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have functions with the same name, and the derived class may not have functions with that name as those of its base classes.

   If the derived class object needs to access one of the similarly named member functions of the base classes then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.

*/

#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet(); // this is how we remove ambiguity.
    }
};

class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class D : public B
{
    int a;

public:
    void say()
    {
        cout << "ambiguity is overwritten" << endl;
    }
};

int main()
{
    // here the user has to remove ambiguity themself.
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived obj;
    obj.greet();

    // here the ambiguity is removed by the compiler by overwriting the method.
    D d;
    d.say();

    return 0;
}