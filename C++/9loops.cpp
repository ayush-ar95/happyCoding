/*
    Loops in C++ :
    There are three types of loop in C++
    1. for loop
    2. while loop
    3. do-while loop
*/

#include <iostream>

using namespace std;

int main()
{
    /*
    syntax of for loop

    for(initilization; condition; updation)
    {
        code;
    }
    */

    //    printing 1 to 40

    for (int i = 1; i <= 40; i++)
    {
        cout << "the value of i is :" << i << endl;
    }
    cout << endl;

    // infinite for loop

    // for(int i=1;i==1;)
    // {
    //     cout<<"this is infinite for loop"<<endl;
    // }

    /*
    syntax of while loop

    while(condition)
    {
        code;
        updation;
    }
    */

    //    printng 1 to 40

    int i = 0;
    while (i <= 40)
    {
        cout << "value of i is: " << i << endl;
        i++;
    }
    cout << endl;

    // infinite while loop

    // while(true)
    // {
    //     cout<<"this is infinite while loop"<<endl;
    // }

    /*syntax of do-while loop

    do
    {
        code;
    } whiel(condition);

    */

    //    disrespective of the conditon do while loops runs atleast once

    //    printing 1 to 40

    i = 0;
    do
    {
        cout << "the value of i is: " << i << endl;
        i++;
    } while (i <= 40);

    return 0;
}