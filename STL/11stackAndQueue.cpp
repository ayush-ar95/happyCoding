// In this program we will implement stack and queue in STL

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    // defining a stack;
    stack<int> s;
    // inserting values in stack;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    // printing the stack;
    while (!s.empty()) // empty() is a boolean function
    {
        cout << s.top() << endl;
        s.pop();
    }

    // defining a queuq;
    queue<string> q;
    // inserting values in queue;
    q.push("ayush");
    q.push("shalu");
    q.push("nunu");
    q.push("prachi");
    q.push("shiva");

    // printing the queue;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}