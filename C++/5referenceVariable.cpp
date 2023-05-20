// reference variable is a variable that contains the address of other variable.
// in other words same variables can have different names.

#include <iostream>

using namespace std;

int main()
{
    float x = 500;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
    return 0;
}