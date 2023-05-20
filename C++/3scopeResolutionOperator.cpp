// socpe resloution operator (::) is used to access a global variable when there is a local variable with same name.

#include <iostream>

using namespace std;

int c = 100;

int main()
{
    int a, b, c;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the value of local variable c is: " << c << endl;    // we are printing local variable with same name.
    cout << "the value of global variable c is: " << ::c << endl; // we are printing global variable with same name.
    return 0;
}