// in this program we will define a constant.
// constant are the variable whose value doesn't changes throught the program.
// we define constant using "const" keyword.

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "the value of a is: " << a << endl;
    a = 50;
    cout << "the value of a is: " << a << endl;
    const int b = 40;
    cout << "the value of b is: " << b << endl;
    // b=50;  this will give error as we are trying to change the value of a constant.

    return 0;
}