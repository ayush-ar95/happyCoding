/* changing one variable of one type into another type is called as typecasting.
 typecasting is of two types--> 1. implicit typecasting 2. explicit type casting

 implicit type casting is done by compiler and there is no data loss
        (bool -> char -> short int -> int -> unsigned int -> long -> unsigned long -> float -> double -> long double)
 explicit type casting is done by programmer and there may be a data loss
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 45;
    float b = 45.46;
    cout << "The value of a is: " << (float)a << endl; // implicit typecasting
    cout << "The value of a is: " << float(a) << endl; // implicit typecasting
    cout << "The value of b is: " << (int)b << endl;   // explicit typecasting
    cout << "The value of b is: " << int(b) << endl << endl; // explicit typecasting

    int c = int(b);
    cout << "The expression is: " << a + b << endl;
    cout << "The expression is: " << a + (int)b << endl;
    cout << "The expression is: " << a + int(b) << endl;

    return 0;
}
