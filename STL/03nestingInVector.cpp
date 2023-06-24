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
        cout << v[i]<<" ";
    }
    cout<<endl;
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
    cout << "enter the number of vectors: " << endl;
    cin >> N;
    vector<int> v1[N]; // there are 10 vectors of 0 size which are stroed in an array.
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements in the vector: " << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the "<<j<<" elements: " << endl;
            int x;
            cin >> x;
            v1[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        printVecArr(v1[i]);
    }

    // vectors of vectors.

    vector<vector<int> > v2;
    return 0;
}