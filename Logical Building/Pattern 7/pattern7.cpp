#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) // For spaces
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) - 1; k++) // For stars
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}