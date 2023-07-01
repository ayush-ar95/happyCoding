// map is a datastructure that store key value pair.

#include <iostream>
#include <map>

using namespace std;

int main()
{
    // declaring a map;

    map<int, string> m;

    // inserting values in map;

    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    // inserting values using functions;

    m.insert(make_pair(4, "afg")); // map contains a pair so use pair function;

    // printing a map using an iterator.

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // cout << it->first << " " << it->second << endl; // same as above line.
    }

    // this will print in shorted order respective to the key, irrespective of the order in which it has inserted.

    // printing map using auto keyword.

    for (auto &pr : m) // pr is a pair variable.
    {
        cout << pr.first << " " << pr.second << endl;
    }

    // we can find value of a key in map using find function.
    // find() returns an iterator. using that iterator we can use/ print the values.

    cout << "using find function" << endl;
    map<int, string>::iterator it1 = m.find(3);
    if (it1 == m.end())
    {
        cout << "NO value" << endl;
    }
    else
    {
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    // we can delete an element of map using erase function.
    // erase function take two type of value. 1. key (it will delete the particular key value pair) 2. iterator (it will delete the pair which iterator is pointing.)

    // erase function taking key value;
    cout << "using erase function and key value." << endl;
    m.erase(3);
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // erase function taking iterator.
    cout << "using erase function and iterator." << endl;
    it = m.find(5);
    m.erase(it);
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // we can clear the map using clear() function.
    cout << "using clear function." << endl;
    m.clear();
    cout << "size of map is: " << m.size() << endl;

    return 0;
}