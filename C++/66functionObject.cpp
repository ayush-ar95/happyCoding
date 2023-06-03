/*
    Function objects: Function wrapped in a class so that it is available like an object.
    > it is also called as functor.

*/

#include <iostream>
#include <functional> // to use the function object.
#include <algorithm>  // to use the sorting function.

using namespace std;

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 16};
    // sort(arr,arr+6); // this will sort in assending order and it take array starting address and ending address as parameter.
    sort(arr, arr + 6, greater<int>()); // this will sort in descending order coz of "greater<int>()" function object.

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}