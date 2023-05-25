/*
    In this program we will learn about array of objects and passing objects as function arguments in C++.
*/

#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the ID of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "the ID of employee is: " << id << endl;
        cout << "the salary of employee is: " << salary << endl;
    }
};

int main()
{
    // using class without using arrays... this is recommended when less number of objects is to be created.

    Employee harry, ayush, ashu, shalu;
    harry.setId();
    harry.getId();

    // using class with using arrays.

    Employee comp[4]; // this is array of objects.
    for (int i = 0; i < 4; i++)
    {
        comp[i].setId();
        comp[i].getId();
    }

    return 0;
}