#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1);

    int cnt = ms.count(1); // Count all the three element.
    cout << cnt;
    // ms.erase(1); // Erase all the 1.

    ms.erase(ms.find(1)); // Erase the first 1.
    ms.erase(ms.find(1), ms.find(1) + 2);   // Erase from the first 1 upto before the third 1.  [)

    return 0;
}