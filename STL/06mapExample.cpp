/*
    Q. Given N strings, print unique strings in lexiographical order with their frequency
    N<= 10^5;
    |S|<=1000

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
    map<string, int> m;
    cout << "Enter the number of element: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "Enter the string" << endl;
        cin >> s;
        m[s] = m[s] + 1;
    }

    cout << "String with its frequency in lexiographical order: " << endl;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}