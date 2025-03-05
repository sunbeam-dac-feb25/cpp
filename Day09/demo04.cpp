#include <iostream>
#include <stack>
#include <queue>
// sequence adapter containers

using namespace std;

int main()
{
    queue<string> q1;
    q1.push("Anil");
    q1.push("Mukesh");
    q1.push("Ramesh");
    q1.push("Suresh");

    q1.pop();

    cout << "Size of q1 = " << q1.size() << endl;
    cout << "Element at front = " << q1.front() << endl;

    return 0;
}

int main1()
{
    stack<string> s1;
    s1.push("Anil");
    s1.push("Mukesh");
    s1.push("Ramesh");
    s1.push("Suresh");

    s1.pop();

    cout << "Size of s1 = " << s1.size() << endl;
    cout << "Element at top = " << s1.top() << endl;

    return 0;
}