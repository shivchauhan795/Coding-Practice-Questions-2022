#include <bits/stdc++.h>
using namespace std;

int main()
{
    // First way
    // vector<int> v1;
    // v1.push_back(1);
    // v1.emplace_back(3);

    // Second way
    // vector<pair<int, int>> v2;
    // v2.push_back({1, 3});
    // v2.emplace_back(2, 4);

    // Third way
    // vector<int> v3(5, 100); // Vector of size 5 having value '20' at all the five indexes.

    // Fourth way
    // vector<int> v4(5); // Vector of size 5 having value '0' at all the five indexes.

    // Fifth way
    // vector<int> v5(5, 20);
    // vector<int> v6(v5);
    // cout << v6[0] << " " << v6[1] << " " << v6[2] << " " << v6[3] << " " << v6[4] << " " << v6[5] << " " << v6[6];

    // vector<int> v = {2, 8, 13, 7, 4};
    // vector<int>::iterator it = v.begin(); // v.begin points to the memory
    // cout << *(it) << " ";                 // *(it) will give the value at memory address 'it'.
    // it++;
    // cout << *(it) << " ";
    // it = it + 2;
    // cout << *(it) << " ";

    // print all the value of vector
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)  // First way
    // {
    //     cout << *(it) << " ";
    // }

    // for (auto it = v.begin(); it != v.end(); it++)   // Second way
    // {
    //     cout << *(it) << " ";
    // }

    // for (auto it : v)   // Third way
    // {
    //     cout << it << " ";
    // }

    // Erase

    // vector<int> v = {2, 8, 13, 7, 4};
    // v.erase(v.begin() + 1); // It will erase the element next to the begin() i.e, '8'

    // v.erase(v.begin()+1,v.begin()+3);   // It will erase 8,13 and the container will be left with 2,7,4.    [start,end)

    // Insert Function

    // vector<int> v(2, 100);          // {100,100}
    // v.insert(v.begin(), 300);       //{300,100,100}
    // v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    // cout << v.size(); // 5     Gives the size of the vector
    // v.pop_back();     // It pop backs the element     {300,10,10,100}

    // v1 -> {10,20}
    // v2 -> {30,40}
    // v1.swap(v2); //v1 -> {30,40}, v2 -> {10,20}

    // v.clear(); // Erases the entire vector

    // cout << v.empty();  // Return 'false' if vector is 'not empty' and returns 'true' if vector 'is empty'

    return 0;
}