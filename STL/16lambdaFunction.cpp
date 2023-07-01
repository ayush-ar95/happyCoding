/*
    In this program we will see 3 algorithms:-
        1. all_of   ---> return true if all is true.
        2. any_of  ---> return true if any one is true.
        3. none_of   ---> return true if none will be true.

    All these algorithms return boolean value(true/false).

    lambda function:- it is a small sysntex to write a temprory type funcions.

*/

#include <iostream>

using namespace std;

bool is_positive(int x)
{
    return x > 0;
}

int main()
{
    //--------- Lambda function -------------

    // defining a lambda function.
    // [](int x){return x+2;}(input);

    // calling a lambda function.
    // cout << [](int x){ return x + 2; }(2)
    //      << endl;

    // auto sum = [](int x, int y) { return x + y; };
    // cout << sum(2, 3) << endl;

    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(7);
    // cout << all_of(v.begin(), v.end(), [](int x){ return x > 0; }); // using lambda function.

    cout << all_of(v.begin(), v.end(), is_positive) << endl; // 3rd parameter is a function which is applied on each element.
    cout << any_of(v.begin(), v.end(), is_positive) << endl;
    cout << none_of(v.begin(), v.end(), is_positive) << endl;

    return 0;
}