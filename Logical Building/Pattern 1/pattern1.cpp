#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) // for row
    {
        for (int i = 0; i < n; i++) // for column
        {
            cout << "* "; // printing star
        }
        cout << endl; // for next line
    }
    return 0;
}