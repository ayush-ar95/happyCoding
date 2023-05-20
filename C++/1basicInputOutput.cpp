// this is the basic program in which we are scaning and printing output from and on console.
// << ---> this is called as insertion operator.
// >> ---> this is called as extraction operator.

#include <iostream>

using namespace std; // we can also write "std::" before cout and cin instead of this line.

int main()
{
    int num1, num2;
    cout << "enter number a\n";
    cin >> num1;
    cout << "enter number b\n";
    cin >> num2;
    cout << "the sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl; // endl is also used for a new line in c++.
    return 0;
}