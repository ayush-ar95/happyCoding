/*
    Given N strings and Q queries.
    In each query you are given a string, print frequency of that string.

    N<= 10^6
    |S| <= 100
    Q<= 10^6

    ip:-
            8
            abc
            def
            abc
            ghj
            jkl
            ghj
            ghj
            abc
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    cout << "Enter the number of strings: " << endl;
    int n;
    cin >> n;
    cout << "enter the strings: " << endl;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
    }
    int q;
    cout << "Enter the number of query: " << endl;
    cin >> q;
    while (q--)
    {
        string s;
        cout << "enter the query: " << endl;
        cin >> s;
        cout << "frequency of the string is: " << m[s] << endl;
    }

    return 0;
}