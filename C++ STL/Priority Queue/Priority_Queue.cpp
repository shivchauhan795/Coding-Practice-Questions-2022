#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq; // Max heap
    // pq.push(6); // 6
    // pq.push(3); // 6 3
    // pq.emplace(10); // 10 6 3
    
    // cout<<pq.top(); // 10
    // pq.pop();
    // cout<<pq.top(); // 6

    priority_queue<int,vector<int>,greater<int>> pq1;   // Min heap
    pq1.push(8); // 6
    pq1.push(2); // 6 3
    pq1.emplace(12); // 10 6 3

    cout << pq1.top();
    return 0;
}