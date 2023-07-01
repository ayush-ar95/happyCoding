// sets is a collection of some elements.
// there are 3 types of sets--> 1. ordered set--> it store elements in sorted order.
//                              2. unordered set
//                              3. multi set

#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

void print(set<string> &s)
{
    set<string>::iterator it;
    cout << "Set is: " << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
        ;
    }

    // another way is using range based loop;
    // for (string value : s)
    // {
    //     cout << value << endl;
    // }
}

int main()
{
    // declaring a set.
    set<string> s;

    // inserting an element in a set using insert() function.
    s.insert("abc"); // time complexity is O(logn).
    s.insert("zsdf");
    s.insert("bcd");

    // accessing the elements of set using find() function.
    set<string>::iterator it;
    it = s.find("abc"); // find wil return iterator of that element.
    print(s);

    // we can delete an element using erase() function.
    s.erase("abc");
    print(s);

    //------------------------------------------------------------------------------------------------------------------
    // declaring unordered set..

    unordered_set<string> us;

    // all the functions in unordered set is same as ordered set, it just take O(1) time complexity unlike ordered set which take O(logn) time complexity.
    us.insert("bbbc");
    us.insert("ayush");

    unordered_set<string>::iterator it1;
    cout << "printing unordered set: " << endl;
    for (it1 = us.begin(); it1 != us.end(); it1++)
    {
        cout << (*it1) << endl;
    }

    //---------------------------------------------------------------------------------------------------------------------
    // declaring multiset..
    // multiset allow repetative element in a set.
    // time complexity of function of multiset is O(logn) as it uses red black tree.

    multiset<string> ms;
    ms.insert("ayush");
    ms.insert("ayush");
    ms.insert("good");
    ms.insert("bad");

    multiset<string>::iterator it2;
    cout << "Printing multiset: " << endl;
    for (it2 = ms.begin(); it2 != ms.end(); it2++)
    {
        cout << (*it2) << endl;
    }

    // in multiset find() will retrun the iterator of 1st repetative element.
    it2 = ms.find("ayush");
    cout << (*it2) << endl;

    // in multiset rease() will delete all the occurance of the repetative element.
    // to delete single occurance use iterator.
    ms.erase("ayush");
    cout << "printing multiset after deletion: " << endl;
    for (it2 = ms.begin(); it2 != ms.end(); it2++)
    {
        cout << (*it2) << endl;
    }

    return 0;
}