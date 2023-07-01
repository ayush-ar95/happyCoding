// In this program we will see some inbuilt sorting technique and some custome sort.

#include <iostream>

using namespace std;

int main()
{
    //------------------------------------ creating and inserting elements into an array------------------
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //-------------------------------- sorting the array using inbuilt function sort()-------------------
    /* sort() takes 2 parameter as input--- 1. index from where shorting will start
                                            2. index +1 till where we want to sort.
    */

    // sort(a, a + n);  // this will sort from starting to ending of the array.

    sort(a + 2, a + n); // this will sort from 2nd element till last element.

    /*
            In case of vector
                vector starting address is v.begin()
                vector ending address is v.end()-1
    */

    //--------------- printing the sorted array------------

    cout << "Sorted array is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}