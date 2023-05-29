#include <iostream>

using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int);
    void getRollNumber();
};

void Student::setRollNumber(int r)
{
    rollNumber = r;
}

void Student ::getRollNumber()
{
    cout << "The roll number is: " << rollNumber << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void Exam ::getMarks(void)
{
    cout << "Maths mark is: " << maths << endl;
    cout << "Physics mark is: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        getRollNumber();
        getMarks();
        cout << "your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};

/*
    notes:
    If we are inheriting B from A and C from B: [A--->B--->C]
    1. A is the base class for B and B is the base class for c.
    2. A--->B--->C is called Inheritance path.

*/

int main()
{
    Result ayush;
    ayush.setRollNumber(007);
    ayush.setMarks(94.0, 90.0);
    ayush.displayResult();
    return 0;
}