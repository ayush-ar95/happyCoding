/*
    map is an associative array and is used to store key-value pairs.
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap; // creating a map.
    marksMap["ayush"] = 98;    // inserting elements into the map.
    marksMap["jack"] = 59;
    marksMap["rohan"] = 30;

    // marksMap.insert({{"tom", 169}, {"cruz", 196}}); // inserting elements in map using insert function.

    map<string, int>::iterator iter; // creating an iterator.
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n"; // printing the map key-vlaue pair using first and second respectively.
    }

    cout << "the size is: " << marksMap.size() << endl;                  // this print the size of map.
    cout << "the max_size is: " << marksMap.max_size() << endl;          // this print the maximum size of map.
    cout << "the empty's return value is: " << marksMap.empty() << endl; // this print the empty's return value.

    return 0;
}