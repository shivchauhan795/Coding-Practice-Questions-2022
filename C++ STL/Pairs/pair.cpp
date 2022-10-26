#include <bits/stdc++.h>
using namespace std;
int main()
{
    // First method
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // Second method
    pair<int, pair<int, int>> p2 = {1, {6, 7}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    // Third method
    pair<int, int> arr[] = {{1, 2}, {5, 8}, {9, 3}};
    cout << arr[1].second;
}