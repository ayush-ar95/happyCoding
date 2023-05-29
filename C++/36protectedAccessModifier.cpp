/*
    protected derivation :- The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class.
    The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.

                            public derivation       private derivation      protected derivation
    1. private members      Not Inherited           Not Inherited           Not Inherited
    2. protected members    Protected               Private                 Protected
    3. public members       Public                  Private                 Protected

*/

#include <iostream>

using namespace std;

class Base
{
protected:
    int a;      // it will behave as private member but will get inherited by derived classes.

private:
    int b;
};

class Derived : protected Base 
{
};

int main()
{
    cout<<"here we are learning protected access modifier."<<endl;
    Base b;
    Derived d;
    //cout<<b.a;      // will not get printed as a is a protected member in both base as well as dereived class.  
    //cout<<d.a;      // will not get printed as a is a protected member in both base as well as dereived class.
    return 0;
}