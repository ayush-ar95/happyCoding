#include <iostream>

using namespace std;
/*
SYNTAX OF CLASS TEMPLATE WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)

template<class T1, class T2....(COMMA SEPARATED)>       // T1,T2 ... are called as template parameters.
class nameOfClass
{
    // class body
};
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();

    myClass<int, float> obj1(1, 1.9);
    obj1.display();

    myClass<char, float> obj2('A', 2.9);
    obj2.display();

    return 0;
}