// manipulator are the operators the is used in formatting the data display.
// the are basically two types of manipulator --> 1. endl which is used for a new line 2. setwidth which is used to set the field width.

#include <iostream>
#include <iomanip> //this contains manipulator setwidth.

using namespace std;

int main()
{
    int a = 3, b = 45, c = 1244;

    cout << "the value of a without using setw is: " << a << endl;
    cout << "the value of b without using setw is: " << b << endl;
    cout << "the value of c without using setw is: " << c << endl;

    cout << "the value of a with using setw is: " << setw(4) << a << endl; // here the numbers are being right justified means a is taking a width of 4.
    cout << "the value of b with using setw is: " << setw(4) << b << endl; // here also the width taken by b is 4.
    cout << "the value of c with using setw is: " << setw(4) << c << endl; // here c alredy has a width of 4 so it will stay the same.

    return 0;
}
