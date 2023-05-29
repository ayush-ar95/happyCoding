/*
    The capability of a class to derive properties and characteristics from another class is called Inheritance.
    Inheritance is one of the most important features of Object-Oriented Programming.

    Inheritance is a feature or a process in which, new classes are created from the existing classes.
    The new class created is called “derived class” or “child class” or "sub class" and the existing class is known as the “base class” or “parent class” or "super class".
    The derived class now is said to be inherited from the base class.

    When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own.
    These new features in the derived class will not affect the base class.

    Types Of Inheritance:-

    1. Single inheritance
    2. Multilevel inheritance
    3. Multiple inheritance
    4. Hierarchical inheritance
    5. Hybrid inheritance

    1. single inheritance:- In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

    2. Multiple Inheritance:- Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

    3. Multilevel Inheritance:- In this type of inheritance, a derived class is created from another derived class.

    4. Hierarchical Inheritance:- In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

    5. Hybrid (Virtual) Inheritance:- Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.

    another definiton:- Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance.

    Visibility mode:-

    1. Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

    2. Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

    3. Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

    > default visibility mode is private.
    > private members of a base class will never get inherited in any case.

    */

#include <iostream>

using namespace std;

// Base Class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // derived class automatically call base class default constructor that why it is made.
};

// Derived Class
/* syntax: class {{derive-class-name}} : {{visiblilty-mode}} {{base-class-name}}
{
    class members/methods/ etc...
}
*/

// creating a programmer class derived from employee base class with visibility as public.
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout << "id of programmer is: " << id << endl;
    }
};

int main()
{
    Employee ayush(1), harry(2);
    cout << "salary of ayush is: " << ayush.salary << endl;
    cout << "salary of harry is: " << harry.salary << endl;

    Programmer skillF(10);
    cout << "language code is: " << skillF.languageCode << endl;
    cout << "Id is: " << skillF.id << endl;
    skillF.getData();

    return 0;
}