/*
    syntax for multiple inheritance:

    class {{derivedClass-name}} : {{visibility-mode}} {{baseClass1-name}}, {{visibility-mode}} {{baseClass2-name}}
    {
        class body of class "Derived"...
    };
*/

#include <iostream>

using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2 // we can add as many bases as we want just seperate them with comma's.
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base1 is " << base2int << endl;
        cout << "The sum of these values is " << (base1int + base2int) << endl;
    }
};

/*
    The inherited derived class will look something like this:
    Data members:
        base1int---> protected
        base2int---> protected
    Member function:
        setBase1int()---> public
        setBase2int()---> public
        show()---> public
*/

int main()
{
    Derived d;
    d.setBase1int(25);
    d.setBase2int(5);
    d.show();
    return 0;
}