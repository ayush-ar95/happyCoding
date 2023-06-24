/*
    vectors are similar to arrays. vectors are also continuous memory blocks but size is created dynamically.
*/

#include <iostream>

using namespace std;

// how to print a vector.
void printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) // size of the vector is calculated using the size().
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// print function using reference.
void printVec1(vector<int> &v)
{
    cout << "Printing using reference " << endl;
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) // size of the vector is calculated using the size().
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declaring a vector.

    vector<int> v; // declaring a vector of integer type. currently the size of the vector is 0. it will increase as we will input data.

    // how to insert element in a vector.

    int n;
    cout << "enter the size of the vector: ";
    cin >> n;
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // push_back method is used to insert element at the end of the vector.
    }
    printVec(v);

    // how to declare a vector of specific size.
    vector<int> v1(5); // this will declare a vector of size 5, all values will be initilize to 0.
    printVec(v1);
    v1.push_back(7); // changing the size of the vector.
    printVec(v1);

    // how to declare a vector of specific size with a specific value.
    vector<int> v2(5, 3); // this will declare a vector of size 5 where all values is initilized to 3.
    printVec(v2);

    v2.pop_back(); // this funtion return the last element of the vector.
    printVec(v2);

    // copying a vector directly.
    vector<int> v3 = v2; // copying a vector into another vector. time complexity is O(n).
    printVec(v3);

    // whenever we pass a vector( like in print function above) a copy of that vector is passed which takes O(n) time.
    // so its a good practice to pass the reference to that vector which will take O(1) time.
    printVec1(v3); // printing using reference.
    return 0;
}