// In this program we will write a custom sort using a comparator function.
/*
    Behaviour of inbuilt comparator function
            --> if u want to swap return false
                else return true.

    we can use inbuilt comparator too.
*/

#include <iostream>

using namespace std;

//-------- defining comparator function/ custom sort.
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        // this will sort the first element in accending order.
        if (a.first > b.first)
            return false;
        return true;
    }
    else
    {
        // this will sort the second element in decending order if first element is same.
        if (a.second < b.second)
            return false;
        return true;
    }
}

int main()
{
    int n;
    cout << "Enter the number of element in the vector: " << endl;
    cin >> n;
    vector<pair<int, int> > a(n);

    // inserting elements;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    // sorting the vector using inbuilt sort.
    sort(a.begin(), a.end(), cmp); // here the 3rd parameter is custom sort function.

    // printing the vector of pair;
    cout << "sorted vectro is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}