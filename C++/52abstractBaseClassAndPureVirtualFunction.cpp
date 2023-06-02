/*
    > Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a
    class is called abstract class.

    > For example, let Shape be a base class. We cannot provide implementation of function draw() in Shape, but we know every derived class must have implementation of draw().

    > We cannot create objects of abstract classes.

    > A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation,
    But we must override that function in the derived class, otherwise the derived class will also become abstract class.

    > A pure virtual function is declared by assigning 0 in declaration.
        example:
            virtual void funtionName() = 0; ---> This is called as do-Nothing function / pure virtual function.
            i.e: whenever this class is derived this function has to be define again otherwise it will give error.

    Some intresting facts:-
    1. A class is abstract if it has at least one pure virtual function.
    2. We can have pointers and references of abstract class type.
    3. If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
    4. An abstract class can have constructors.
    5. An abstract class in C++ can also be defined using struct keyword.
        example:

                struct shapeClass
                {
                    virtual void Draw()=0;
                };
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "here we will learn about abstract base class and pure virtual function." << endl;
    return 0;
}