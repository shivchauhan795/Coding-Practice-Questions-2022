#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++) // For Spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++) // For Stars
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}