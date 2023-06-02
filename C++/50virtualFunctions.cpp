#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base = 10;
    // void display()
    virtual void display() // this will display the derived class display function despite the pointer is of base class and object is of derived class.
    {
        cout << "1 displaying base class variable var base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 20;
    void display()
    {
        cout << "2 displaying base class variable var base in derive class " << var_base << endl;
        cout << "2 displaying derived class variable var derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}