/*
    pair is used to combine two different type of data together.

    (to compile with c++11 version use: " clang++ -std=c++11 -stdlib=libc++ -Weverything fileName.cpp ")
*/

#include <iostream>

using namespace std;

int main()
{
    pair<int, string> p; // here we have created a pair of integer and string.

    // method 1 to initilize a pair.

    p = make_pair(007, "ayush");                // inserting values into pair.
    cout << p.first << " " << p.second << endl; // printing a pair, ".firt" will print 1st part and ".second" will print the 2nd part.

    // method 2 to initilize a pair.

    // p={2,"abc"};    // this need c++ 11 version.
    cout << p.first << " " << p.second << endl;

    // copying pair 'p' into pair 'p1'.

    pair<int, string> p1 = p;
    cout << p1.first << " " << p1.second << endl;
    p1.first = 3; // here changing of p1 will not affect value of p as p1 is copy of p.
    cout << p1.first << " " << p1.second << endl;

    // copying piar 'p' into pair 'p2' using address.

    pair<int, string> &p2 = p;
    cout << p.first << " " << p.second << endl;
    p2.first = 5;
    cout << p.first << " " << p.second << endl;

    // how to declare an array of pairs.

    pair<int, int> p_array[3];    // declaring an array of piars.
    p_array[0] = make_pair(1, 2); // initializing values.
    p_array[1] = make_pair(2, 3);
    p_array[2] = make_pair(3, 4);

    // printing the pair array.

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // swapping the elements of a pair array.

    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // how to take user input in pair.

    pair<int, int> p4;
    cout << "enter elements of piar 4" << endl;
    cin >> p4.first >> p4.second;
    cout << "value of piar p4 is " << p4.first << " " << p4.second << endl;

    return 0;
}