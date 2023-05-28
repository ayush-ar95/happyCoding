#include <iostream>

using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9) // assingning default value to b i.e: 9.   if the user will input some value of b then that value will get printed otherwise the default value will be printed.
    {
        data1 = a;
        data2 = b;
    }

    void printData()
    {
        cout<<"the value is: "<<data1<<" and "<<data2<<endl;
    }
};

int main()
{
    simple s(1);
    s.printData();

    return 0;
}