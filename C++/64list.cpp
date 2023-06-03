/*
    list is a container which is used to store data. It is a bidirectional linear list which show efficient operations of insertion and deletion.
*/

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // will create a list of 0 length.

    list1.push_back(5); // inserting an element in the list.
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int>::iterator iter; // creating an iterator.
    // iter = list1.begin();     // pointing the iterator to the begning of the list.
    // cout << *iter << " ";     // printing the element at the position it is pointing to.
    // iter++;                   // increamenting the position.
    // cout << *iter << " ";     // instead of doing this repeatedly we will use display function.

    display(list1);

    // removing elements from the list.....
    list1.pop_back(); // this will delete one element of the list from the back.
    display(list1);
    list1.pop_front(); // this will delete one element of the list from the front.
    display(list1);
    list1.remove(9); // this will remove all the occurences of the given element.
    display(list1);

    // sorting the list.....
    list1.sort(); // this will sort the given list.
    display(list1);

    list<int> list2(3); // empty list of size 7.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45; // inserting the element in the list.
    iter++;     // increasing the position of the iterator.
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

    display(list2);

    list1.merge(list2); // this will merge list 2 into list 1.
    cout << "List 1 after merging ";
    display(list1);

    // reversing the list...
    list1.reverse(); // this will reverse the given list.
    display(list1);

    return 0;
}