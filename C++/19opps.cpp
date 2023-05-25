/*
    OOPS ---> classes and objects

    C++ ---> initially called ---> c with classes by stroustroup
    class ---> extension of structures (in c)
    structures had limitations
        - members are public
        - no methods
    classes ---> structures + more
    classses ---> can have methods and properties
    classes ---> can make few members as private and few as public
    structures in c++ are typedefed
    you can declare objects along with the class declaration like this:
        example-

        class Employee{

            class definition...
        }harry, rohan, lovish;
    harry.salary =8 makes no sense if salary is private

*/

// nesting of member functions

#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s; // it is private because by default everything is private in a class.
    void chkBin(void);

public:
    void read(void);

    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}

void binary ::chkBin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chkBin(); // this is a way of nesting the member function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "the ones complement is: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chkBin(); we can't use this because this is a private function.
    b.ones();
    b.display();
    return 0;
}