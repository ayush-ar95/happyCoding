/*
    In this program we will see what is constructor and how to use it.

    Constructor is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects. The constructor has the same name as the class or structure. Constructor do not return value, hence they do not have a return type.
*/

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    // creating constructor
    // constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    complex(void); // constructor declaration.

    void printNumber()
    {
        cout << " your number is: " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // this is a default constructor coz it doesn't accept any parameter.
{
    a = 10;
    b = 0;
    // cout<<"hello world"<<endl;     // anything written inside a constructor will be executed/printed whenever an object is created.
}

int main()
{
    complex c;
    c.printNumber();
    return 0;
}

/*
    characteristics of constructor :-
    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever the object is created.
    3. They can't return values and do not have a return types.
    4. It can have default arguments.
    5. we cannot refer to their address.
*/