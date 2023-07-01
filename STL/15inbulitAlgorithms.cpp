// In this program we will see inbulit algorithms of STL;

#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    cout << "Enter the size of vector: " << endl;
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element of vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int>::iterator it;
    it = min_element(v.begin(), v.end()); // this will return the iterator/pointer of the minimum element.
    cout << "Minimum element is: " << (*it) << endl;

    it = max_element(v.begin(), v.end()); // this will return the iterator/pointer of the maximum element.
    cout << "Maximum element is: " << (*it) << endl;

    int x = accumulate(v.begin(), v.end(), 0); // this will return the integer value of sum element, the 3rd parameter is the initial sum.
    cout << "Sum of element is: " << x << endl;

    int c = count(v.begin(), v.end(), 6); // it counts the occurance of a given element, 3rd parameter is the element whose count we have to count.
    cout << "Count of 6 is: " << c << endl;

    it = find(v.begin(), v.end(), 2);
    if (it != v.end())
    {
        cout << "element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    reverse(v.begin(), v.end()); // reversing a vector;
    cout << "reversed vector is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    string s = "ayush ranjan";
    reverse(s.begin(), s.end()); // reversing a string.
    cout << "Reversed string is: " << s << endl;

    return 0;
}