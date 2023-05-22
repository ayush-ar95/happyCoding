/* In this program we will see how to use break and continue statement in our program
break --> break statement will break the loop and get out of the loop.
continue --> continue statement will leave the current iteration and get on to the next iteration.
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "the value of i is: " << i << endl;
        if (i == 2)
        {
            cout << "i am inside if statement" << endl;
            break;
            cout << "this is after break statement statement" << endl; // this statement will not get printed as break will get out of loop and the loop will terminate.
        }
    }

    for (int j = 0; j < 5; j++)
    {
        cout << "the value of j is:" << j << endl;
        if (j == 2)
        {
            cout << "i am inside if statement" << endl;
            continue;
            cout << "this is after continue statement" << endl; // this statement will not get printed as continue will escape it but it will execute the next iteration.
        }
    }
    return 0;
}