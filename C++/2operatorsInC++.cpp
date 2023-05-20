// this program we will see different types of operators in c++.

#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++" << endl;
    cout << "followings are the types of arithmetic operator in c++" << endl;

    // Arithmetic operators
    cout << "The value of a+b is: " << a + b << endl;
    cout << "The value of a-b is: " << a - b << endl;
    cout << "The value of a*b is: " << a * b << endl;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a%b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl << endl;

    // Assingment operators (=) :- used to assign values to variables. example:- int a=5;

    // comparison operators
    cout << "followings are the types of comparison operator in c++" << endl;
    cout << "The value of a==b is: " << (a == b) << endl;
    cout << "The value of a!=b is: " << (a != b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    cout << "The value of a<=b is: " << (a <= b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << "The value of a<b is: " << (a < b) << endl << endl;

    // Logical operators
    cout << "Following are the logical operators in c++" << endl;
    cout << "The value of logical and operator ((a==b)&&(a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical or operator ((a==b)||(a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of logical not operator (!(a==b)) is: " << (!(a == b)) << endl;

    // bitwise operators ---> we will see later.

    return 0;
}