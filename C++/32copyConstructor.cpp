// copy constructor is a constructor that makes a copy of another object.

#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj) // this is copy constructor.
    {
        cout << "copy constructor is called" << endl;
        a = obj.a;
    }

    // complier allocate a default copy constructor to every class. if we will hide the above copy constructor then still the program will terminate successfully but if we have to write our own copy constructor then we have to make a new copy constructor of our own.

    // when no copy constructor is found compiler supply its own copy constructor.

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x(45), y, z, z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resembles x
    Number z1(x); // object z1 is created which resembles exactly like x using copy constructor. here copy constructor will be called.
    z1.display();

    z2 = z; // here copy constructor will not be called coz object is created before and constructor is called at object creation.
    z2.display();

    Number z3 = z; // her copy constructor will be invoked coz object is created in this line only.
    z3.display();
    return 0;
}
