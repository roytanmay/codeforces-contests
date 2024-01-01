#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int a1 = 0, b1 = 0, pd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                a1++;
            if (b[i] == 1)
                b1++;
            if (a[i] != b[i])
                pd++;
        }

        // cout << "Output: ";
        if (pd == 0)
            cout << "0" << endl;
        else
        {
            if (pd == abs(a1 - b1))
                cout << abs(a1 - b1) << endl;
            else
                cout << abs(a1 - b1) + 1 << endl;
        }
        // cout << endl;
    }

    return 0;
}