#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        int character = 65;
        for (int j = i; j >= 1; j--)
        {
            cout << (char)character;
            character++;
        }
        cout << endl;
    }

    return 0;
}