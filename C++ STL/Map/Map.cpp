#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp; // First declaration
    mp[1] = 2;
    mp.emplace(3, 7);
    mp.insert({2, 5});

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mp[2] << endl;
    cout << mp[4];

    map<pair<int, int>, int> mp1;
    mp1[{2, 3}] = 6;
    return 0;
}