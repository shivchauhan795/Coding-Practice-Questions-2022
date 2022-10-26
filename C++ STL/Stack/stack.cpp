#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout << st.top() << endl;   // Top means the last element which is pushed in the stack
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty();
    
    return 0;
}