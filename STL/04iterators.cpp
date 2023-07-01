// iterators are pointer like structures.
// iterators generally points to elements of containers.
// iterators is used to access the values(indexes) of containers(vector, map, pair...) and perform various operations.

#include <iostream>

using namespace std;

int main()
{
    vector<int> v;
    // initilizing the vector v.
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // defining an iterator of vector v;
    vector<int>::iterator it = v.begin(); // here the iterator 'it' is pointing to the first element of vector v.
    cout << (*it) << endl;                // this will print the first element.
    cout << (*(it + 1)) << endl;          // this will print the next element, this shows that iterator are continuous.

    // traversing the vector using iterator.

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // iterators pointing to a pair;

    // defining a vector of pair;

    vector<pair<int, int> > v_p;
    v_p.push_back(make_pair(1, 2));
    v_p.push_back(make_pair(2, 3));
    v_p.push_back(make_pair(3, 4));

    // defining the iterator.
    vector<pair<int, int> >::iterator itv_p;
    // iterating the vector.
    cout << "iterating the vector pair: " << endl;
    for (itv_p = v_p.begin(); itv_p != v_p.end(); itv_p++)
    {
        cout << (*itv_p).first << " " << (*itv_p).second << endl;

        // (*itv_p).first can be written as: (itv_p -> first).
    }

    // range based loops...

    cout << "using ranged based loops." << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    // auto keyword automatically dertermines the data type of a variable or container. it can also be used to define iterators.

    return 0;
}