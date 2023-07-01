// in this program we will store the first and last name of a student with there marks.
// we will take a map nested with pair and vector.
/*
    input:
            2
            ayush ranjan
            4
            1 2 3 4
            prachi mishra
            3
            2 3 4
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<pair<string, string>, vector<int> > m;
    cout << "enter number of students: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string first, last;
        cout << "Enter name: " << endl;
        cin >> first >> last;
        cout << "Enter the number of marks: " << endl;
        int m_count;
        cin >> m_count;
        cout << "Enter the marks: " << endl;
        for (int i = 0; i < m_count; i++)
        {
            cin >> marks;
            m[make_pair(first, last)].push_back(marks);
        }
        cout << endl;
    }

    map<pair<string, string>, vector<int> >::iterator it;
    cout << "printing the details: " << endl;

    for (it = m.begin(); it != m.end(); it++)
    {
        pair<string, string> full_name = (*it).first;
        // string f, l;
        // full_name.first = f;
        // full_name.second = l;

        cout << "name: " << full_name.first << " " << full_name.second << endl;

        vector<int> marks_list = (*it).second;
        cout << "marks: " << endl;
        for (int i = 0; i < marks_list.size(); i++)
        {
            cout << marks_list[i] << " ";
        }
        cout << endl;
    }

    return 0;
}