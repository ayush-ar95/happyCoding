// In this program we will make a function of one class a friend of another class. i.e:- a funcion of one class can access private data of another class

#include <iostream>

using namespace std;

class complex; // this is called as forward declaration. we do this coz complex is used in claculator class without being declared/defined.

class calculator // this is a calculator class which has 2 functions which add two number (private members) of different class
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); // we will not write the definition here coz complex class has yet not defined. we will deifne the funtion after the complex class is defined

    int sumComComplex(complex, complex);
};

class complex
{
    int a, b;

    friend int calculator ::sumRealComplex(complex o1, complex o2); // giving permission to function to access private data of another class.
    // this is individually declaring funcions as friends... if there will be many functions of class calculator that wants to access private data of complex class then in that case we will make a friend class.

    friend int calculator ::sumComComplex(complex o1, complex o2); // another function of same class is also declared as friend.

    // aliter : declaring the entire calculator class as friend.

    friend class calculator;

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
};

int calculator ::sumRealComplex(complex o1, complex o2) // defining the function of class calculator after the definition of complex class.
{
    return (o1.a + o2.a);
}

int calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is: " << res << endl;

    int resC = cal.sumComComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is: " << resC << endl;
    return 0;
}