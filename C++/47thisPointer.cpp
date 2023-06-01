// "this" is a keyword which is a pointer which points to the object which invokes the member functions.
// "this" is also used to return the object's pointer which invokes the member funtions.
#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // void setData(int a)
    A &setData(int a) // this function will return the pointer's address.
    {
        // a = a;  // this will not give any error but this will give garbage value..coz local variable 'a' has more priority so class's 'a' will not be invoked.
        this->a = a;  // The 'this' pointer is used to retrieve the object's 'a' hidden by the local variable 'a'
        return *this; // this line is returning the pointer address which invoked the member funtion.
    }
    void getData()
    {
        cout << "the value of a is: " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4); // this will return a pointer and we can perform our operation on that pointer as well which is show below.
    // a.getData();
    a.setData(10).getData(); // getData function is applied directly on the object returned by setData function.
    return 0;
}