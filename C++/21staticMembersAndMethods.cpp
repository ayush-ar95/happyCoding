// In this program we will see static variables and functions.

#include <iostream>

using namespace std;

class Employee
{
    int Eid;
    // int count; here by using this we cannot count all the employee as it will not be common for all employee, it will be initilized for all employee seperatly. so we will use static variable.

    static int count; // count is the static data member of class employee. scope of static variable is through out the class and its lifetime is till the program execution. here we can't initilize the count variable but we can initilize it below.

public:
    void setdata(void)
    {
        cout << "enter the employee id: " << endl;
        cin >> Eid;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employee is: " << Eid << " and his employee number is: " << count << endl;
    }

    /*
        static functions are used when we want to access all the static variable and all static members. static functions can be called using class name only it doesn't requires any object.

        static functions have the access of other static variables and static functions only, they don't have any other access.
    */

    static void getcount() // this is a static function.
    {
        // cout<<Eid; this will throw and error coz it doesn't have access to non static variables.
        cout << "the value of count is: " << count << endl;
    }
};

int Employee ::count; // we need to declare it outside as it will be common for all classes. this will be initilized only once after that it will only be updated.

// int Employee ::count=1000;   its default value is 0 but we can initilized it to any value and the counting will begin from there.

int main()
{
    Employee ayush, harry, ashu;
    // ayush.id= 1;
    // ayush.count= 1;  we will not be able to do this as both the variable is private.

    ayush.setdata();
    ayush.getdata();
    Employee::getcount(); // this is how a static function is called using a class. (:: is called as scope resolution operator.)

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    ashu.setdata();
    ashu.getdata();
    Employee::getcount();

    return 0;
}