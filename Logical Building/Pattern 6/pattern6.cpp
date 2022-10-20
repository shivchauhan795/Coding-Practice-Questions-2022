#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        for (int j = n; j >= i; j--)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}