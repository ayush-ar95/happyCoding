/*
    Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

    1. Destructor has the same name as their class name preceded by a tilde (~) symbol.
    2. It is not possible to define more than one destructor. The destructor is only one way to destroy the object create by constructor. Hence destructor cannot be overloaded.
    3. Destructor neither requires any argument nor returns any value.
    4. It is automatically called when object goes out of scope.
    5. In destructor, objects are destroyed in the reverse of an object creation.
*/

#include <iostream>

using namespace std;

int obj = 0;

class num
{
public:
    num()
    {
        obj++; // here a warning is generated coz count is ambigous as it can be accessed globally and locally by class.
        cout << "This is the time when constructor is called for object number " << obj << endl;
    }
    ~num() // destructor never takes an arguments nor does it return any value.
    {
        cout << "This is the time when my destructor is called for object number " << obj << endl;
        obj--;
    }
};

int main()
{
    cout << "we are inside our main function" << endl;
    cout << "Creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "back to main " << endl;
    return 0;
}