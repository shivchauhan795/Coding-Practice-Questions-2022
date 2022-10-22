#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    // For upward pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space > 0; space--) // For space
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++) // For stars
        {
            cout << "* ";
        }

        cout << endl;
    }

    // For downward pyramid
    for (int i = n; i > 0; i--)
    {
        for (int space = 0; space < n - i; space++) // For space
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++) // For stars
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}