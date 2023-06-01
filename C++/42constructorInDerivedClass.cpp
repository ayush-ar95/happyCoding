/*
    Constructors in Derived Classes...

    1. we can use constructors in derived classes in c++.
    2. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
    3. But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor.
    4. If both base and derived classes have constructors, base class constructor is executed first.
    5. In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
    6. In multilevel inheritance, the constructors are executed in the order of inheritance.

    Special Syntax...

    1. C++ supports an special syntax for passing arguments to multiple base classes.
    2. The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.
    3. The body is called after all the constructors are finished executing.

    Derived-constructor(arg1,agr2,arg3...): Base1-constructor(arg1,arg2),Base2-constructor(arg3,arg4)
    {
        body
    }Base1-constructor(arg1,arg2)


    Special case of Virtual Base Class...

    1. The constructors for virtual base classes are invoked before an nonvirtual base class.
    2. If there are multiple virtual base classes, they are invoked in the order declared.
    3. Any non-virtual base class are then constructed before the derived class constructor is executed.
*/

/*
    Case 1:
    class b: class a{
        order of execution of constructor is-> first a() then b()
    };

    case 2:
    class a : public class b, public class c
    {
        order of execution of constructor is -> b() then c() then a()
    };

    case 3:
    class a : public class b, virtual public c
    {
        order of execution of constructor is -> c() then b() then a()       // coz virtual class is given more preference.
    }
*/

#include <iostream>

using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // way of initilizing constructor which will internally pass value to base1 constructor and base2 constructor.
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived ayush(1, 2, 3, 4);
    ayush.printDataBase1();
    ayush.printDataBase2();
    ayush.printDataDerived();
    return 0;
}