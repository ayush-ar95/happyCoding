/*
    Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.

    Need for Virtual Base Classes:

    Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D as shown in figure below.
               |----class B-->|
    class A--->|              |--->class D
               |----class C-->|

    As we can see from the figure that data members/function of class A are inherited twice to class D. One through class B and second through class C.
    When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error.

    To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as :

    syntax of virtual base class:

    Syntax 1:
    class B : virtual public A
    {
    };

    Syntax 2:
    class C : public virtual A
    {
    };

    note:
    virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base.
*/

/*
    All inheritances in the program below:
            Student ---> test
            Student ---> Sports
            test ---> result
            sports ---> result
*/

#include <iostream>

using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setNumber(int a)
    {
        rollNumber = a;
    }
    void printNumber(void)
    {
        cout << "your roll number is: " << rollNumber << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks(void)
    {
        cout << "Your result is: " << endl
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result ayush;
    ayush.setNumber(007);
    ayush.setMarks(90, 85);
    ayush.setScore(9);
    ayush.display();
    return 0;
}