/*
    whenever a function which is not a part of class is trying to access the private data of that class the complier will through error.
    If we want that outside function to access the private data we use "friend" keyword while declaring that function inside the class(whose private data we want to access.)
*/

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is: " << a << " + " << b << "i" << endl;
    }

    friend complex sumComplex(complex o1, complex o2); // here friend keyword is used while declaration to make this function a friend. this line means that a non member - sumComplex function is allowed to do anything with the private and protected members(data).
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
    properties of friends function :-
    1. not in the scope of class. (means this function is not the part of that class)
    2. since it is not in the scope of the class, it cannot be called from the object of that class and dot operator. c1.sumComplex() is invalid statement.
    3. can be invoked without the help of any objects.
    4. usually contains objects as arguments.
    5. can be declared anywhere in public or private section of the class.
    6. it can't access the members directly by their names and need object_name.member_name to access any member.
    7. Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

*/