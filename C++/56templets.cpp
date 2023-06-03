/*
    Q. what is template?
    > A template is a simple yet very powerful tool in C++.
    The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types.
    For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes,
    we can write one sort() and pass the datatype as a parameter.

    Class Templates:- Class templates like function templates, class templates are useful when a class defines something that is independent of the data type.
    Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.

    Function Templates:- We write a generic function that can be used for different data types.
    Examples of function templates are sort(), max(), min(), printArray().

    > C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

    Q. How do template works?
    > Templates are expanded at compiler time. This is like macros.
    The difference is that the compiler does type-checking before template expansion.
    The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class.

    Q. Can there be more than one argument for templates?
    > Yes, like normal parameters, we can pass more than one data type as arguments to templates.

    Q. Can we specify a default value for template arguments?
    > Yes, like normal parameters, we can specify default arguments to templates.

    Q. What is the difference between function overloading and templates?
    > Both function overloading and templates are examples of polymorphism features of OOP.
    Function overloading is used when multiple functions do quite similar (not identical) operations,
    templates are used when multiple functions do identical operations.

    Q. What happens when there is a static member in a template class/function?
    > Each instance of a template contains its own static variable.

    Q. What is template specialization?
    > Template specialization allows us to have different codes for a particular data type.

    Q. Can we pass non-type parameters to templates?
    > We can pass non-type arguments to templates.
    Non-type parameters are mainly used for specifying max or min values or any other constant value for a particular instance of a template. The important thing to note about non-type parameters is that they must be const.
    The compiler must know the value of non-type parameters at compile time. Because the compiler needs to create functions/classes for a specified non-type value at compile time.



    Syntax for Templates:

    template < class T >
    class vector
    {
        T* arr;
        pulic:
            vertor(T* arr)
            {
                //code...
            }
            ... many other methods
    }

*/

#include <iostream>

using namespace std;

class vector1
{

public:
    int *arr;
    int size;

    vector1(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotProduct(vector1 &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector1 v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector1 v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout << a << endl;

    // The above code works for integer. what iff we had float numbers... in that case this will give wrong answer.
    // either make nuew class for float numbers or use templates. (see code 57)

    return 0;
}