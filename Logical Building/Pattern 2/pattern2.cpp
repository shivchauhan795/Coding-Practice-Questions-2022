#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) // for row
    {
        for (int j = 0; j < i; j++) // for co
        {
            cout << "* ";   // for printing
        }
        cout << endl;   // for next line
    }
    return 0;
}