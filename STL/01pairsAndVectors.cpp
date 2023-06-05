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

    return 0;
}