/*
    struct :- size of struct is sum of the size of individual elements.
    union :- size of union is the size of the maximum element in it.
    enum :- it is a data type that takes values and assign then an integer and we can use the values through the integer.

*/

#include <iostream>

using namespace std;

typedef struct employee // here we can also use typedef because of which we don't need to write employee again and again.
{
    int eId;
    char favChar;
    float salary;
} emp;

union property
{
    int numberOfCars;
    float bankBalance;
};

int main()
{
    // struct employee harry;
    // struct employee ayush;

    emp harry; // we can use this syntax when we use typdef.
    emp ayush; // we can use this syntax when we use typdef.

    harry.eId = 001;
    harry.favChar = 'a';
    harry.salary = 1234;

    ayush.eId = 007;
    ayush.favChar = 'm';
    ayush.salary = 1234;

    cout << "employee id's of ayush and harry are as: " << ayush.eId << "\tand\t" << harry.eId << endl;
    cout << "employee favChar's of ayush and harry are as: " << ayush.favChar << "\tand\t" << harry.favChar << endl;
    cout << "employee salary's of ayush and harry are as: " << ayush.salary << "\tand\t" << harry.salary << endl;

    cout << "sum of the salary of ayush and harry is: " << ayush.salary + harry.salary << endl;

    union property x;
    union property y;

    x.numberOfCars = 2;
    // x.bankBalance= 4500;     //we can use only one element at a time.

    y.numberOfCars = 3;
    // y.bankBalance=5000;      //we can use only one element at a time.

    cout << "numbers of cars of x is:" << x.numberOfCars << endl;
    cout << "numbers of cars of y is:" << y.numberOfCars << endl;
    // cout<<"bank balance of x is:"<<x.bankBalance<<endl;
    // cout<<"bank balance of y is:"<<y.bankBalance<<endl;

    enum gender
    {
        male,
        female
    }; // here the value of male is 0 and value of female is 1.

    gender gen;

    gen = female;

    switch (gen) // this will be executed based on the value of either male or female.
    {
    case male:
        cout << "your gender is male" << endl;
        break;
    case female:
        cout << "your gender is female" << endl;
        break;

    default:
        cout << "gender can be only male or female" << endl;
    }

    return 0;
}
