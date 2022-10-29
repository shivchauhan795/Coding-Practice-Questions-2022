#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(2);  // 2
    st.emplace(2); // 2
    st.insert(4);  // 2 4
    st.insert(1);  // 1 2 4
    st.insert(3);  // 1 2 3 4

    // auto it = st.find(3); // Points to the address where 3 is stores. And stores it in the iterator.

    // auto it = st.find(6); // Points to the address next to the last address.

    st.erase(4); // It will erase the element 5 and maintain the sorted order.

    int cnt = st.count(7);  // Count number of times the element occur. If occur then return 1 else 0.

    cout << cnt;
    return 0;
}