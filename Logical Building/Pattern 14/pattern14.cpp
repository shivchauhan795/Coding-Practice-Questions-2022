#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int character = 65;
        for (int j = 0; j < i; j++)
        {
            cout << (char)character;
            character++;
        }
        cout << endl;
    }

    return 0;
}