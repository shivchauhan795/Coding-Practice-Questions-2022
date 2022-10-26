#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);    // 2
    q.push(3);    // 3
    q.emplace(4); // 4

    q.back() += 5; // It will add 5 to 4 i.e, the back value.  In queue back means the last element pushed in the stack

    cout << q.back() << endl;
    cout << q.front() << endl;

    q.pop();
    cout << q.front();
    return 0;
}