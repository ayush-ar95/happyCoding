/*
    In array we cannot store more element than we have defined. But if we want to use an array that adjust its size automatically, we use vector(resizeable array).
*/
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << " displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // defining integer type vector of length 0.
    display(vec1);    // this will print nothing as the vector is length 0.

    int element, size;
    cout << "Enter the size of the vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector " << endl;
        cin >> element;
        vec1.push_back(element); // this will insert the element at the end.vec
    }
    vec1.pop_back(); // this will delete on element from the end.
    display(vec1);

    // creating an iterator.
    vector<int>::iterator iter = vec1.begin(); //  here the iterator is pointed at the begining of the vector.
    vec1.insert(iter, 566);          // this will insert (at a position where iterator is pointing to) an element using an iterator.
    display(vec1);
    vec1.insert(iter + 1, 566); // this will insert element at 2nd position coz iterator is pointing to 2nd position.
    display(vec1);
    vec1.insert(iter + 1, 5, 566); // this will insert 5 copies of vector.
    display(vec1);

    vector<char> vec2(4); // 4 element character vector.
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2); // 4 element character vector from vec2
    display(vec3);

    vector<int> vec4(6, 3); // 6 element vector of 3s
    display(vec4);          // this will display 6 element with value as 3.

    cout << vec4.size() << endl; // this will display size of the vector.

    return 0;
}