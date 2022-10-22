#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // First triangle
        {
            cout << j << " ";
        }
        for (int space = (n - i) * 2; space >= 1; space--) // For space
        {
            cout << "  "; // double space of the other two loops give space after printing
        }
        for (int k = 1; k <= i; k++) // First triangle
        {
            cout << (i - k) + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}