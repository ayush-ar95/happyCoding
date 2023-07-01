/* there is only three basic difference between maps and unordered maps...
    1. inbuilt implementation--> it uses hashing while map uses red black tree.
    2. time complexity--> it has time complexity of O(1) while map has O(logn).
    3. valid keys datatype--> we cannot use datastructure who doesn't has hash function unlike in map.

    else everything is same.
*/

#include <iostream>
#include <map>

using namespace std;

void print(unordered_map<int, string> &m)
{
    cout << "the size of map is: " << m.size() << endl;
    unordered_map<int, string>::iterator it;
    cout << "the unordered map is: " << endl;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}

int main()
{
    // declaring unordered map;
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
    print(m);
    return 0;
}