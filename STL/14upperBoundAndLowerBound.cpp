/*
    If the datastructure is sorted than upper bound or lower bound will take O(log n) time.
    else it will take O(n) time.

    upper bound will always return the next higher value.
    lower bound will return same value if there else it will return next higher value.

    both upper and lower bound returns the location/ position of element.
    In case of array it will return pointer.
    In case of vector it will return iterator.

    syntax:
        lower_bound(strating address, ending addres+1, element whose lower bound has to be found);
        upper_bound(strating address, ending addres+1, element whose upper bound has to be found)

    In maps lower and upper bound is applied only on 'key'.
    In set use = s.lower_bound(value); --- this will take O(log n) time
    In set use = lower_bound(s.begin(), s.end(), value); --- this will take O(n) time
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the size of array: " << endl;
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int *ptr = lower_bound(a, a + n, 5);
    cout << "lower bound is: " << (*ptr) << endl;

    ptr = lower_bound(a, a + n, 6);
    cout << "lower bound is: " << (*ptr) << endl;

    ptr = upper_bound(a, a + n, 26); // this will print garbage if 26 will not be there in array.
    cout << "upper bound is: " << (*ptr) << endl;

    ptr = upper_bound(a, a + n, 7);
    cout << "upper bound is: " << (*ptr) << endl;

    return 0;
}