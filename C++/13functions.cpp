/*
functions is used to break the whole program in small parts. functions are based on the philosphy that make once and use repeatedly.
the parameter inside a function is called as formal parameter where as actual parameter are the values that is passed to the functions.
*/

#include <iostream>

using namespace std;

int sum(int a, int b) // it is defined befor main so no need of function prototype.
{
    int c = a + b;
    return c;
}

int dif(int, int); // function prototype.

int main()
{
    int x, y;
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter second number" << endl;
    cin >> y;
    cout << "the sum of " << x << " and " << y << " is: " << sum(x, y) << endl; // here x and y are actual parameters.
    cout << "the difference of " << x << " and " << y << " is: " << dif(x, y) << endl;
    return 0;
}

/* if we want to keep our function after the main function then we use function prototype.
    syntax of function prototype : type function-name(arguments);
    examples :- int sum(int a, int b); ---> acceptable
                int sum(int a,b); ----> not acceptable
                int sum( int, int); ---> acceptable
                void g(void); ----> acceptable,,, as this function is neither taking any parameter nor it is returning any value.
*/

int dif(int x, int y) // this is written after main so its prototype is defined above.
{
    int z = x - y; // here x and y are formal parameters and they take value from a and b.
    return z;
}