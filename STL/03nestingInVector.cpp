#include <iostream>

using namespace std;

// printing vector of pair.
void printVec(vector<pair<int, int> > &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

// printing array of vector.
void printVecArr(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// printing vectors of vector.
void printVecVec(vector<vector<int> > &v)
{
    cout << "The vector of vector is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // creating a vector of pair.

    vector<pair<int, int> > v; // here every element of the vector is a pair.
    cout << "Enter the size of the vector: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter the first element of " << i << " pair" << endl;
        cin >> x;
        cout << "Enter the second element of " << i << " pair" << endl;
        cin >> y;
        v.push_back(make_pair(x, y)); // first creating a pair then pushing it back in vector.
    }
    printVec(v);

    // difference between array of vector and vector of vector.

    // array of vector.
    int N;
    cout << "enter the size of vector array: " << endl;
    cin >> N;
    vector<int> v1[N]; // there are 10 vectors of 0 size which are stroed in an array.
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements in the vector: " << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the " << j << " elements: " << endl;
            int x;
            cin >> x;
            v1[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVecArr(v1[i]);
    }

    // vectors of vectors.

    int N1;
    cout << "Enter the size of outer vector: " << endl;
    cin >> N1;
    vector<vector<int> > v2;
    for (int i = 0; i < N1; i++)
    {
        int n;
        cout << "Enter the size of nested vector: " << endl;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter the " << j << " element of nested vector :" << endl;
            cin >> x;
            temp.push_back(x);
        }
        v2.push_back(temp);
    }

    printVecVec(v2);

    return 0;
}