#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var base in derived class " << var_base << endl;
        cout << "displaying derived class variable var derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // base class pointer can be pointed by derived class objects. In this case the functions called by the pointer will be of base class but not of the derived class, this is called as late binding.

    base_class_pointer->var_base = 34;
    base_class_pointer->display(); // here it is running the function of base class despite the object being of derived class.

    // base_class_pointer->var_derived =134;   // this will throw an error despite the object being of derived class.

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}