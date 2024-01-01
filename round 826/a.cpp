#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int m = a.size(), n = b.size();
        int xa = 0, xb = 0;

        for (int i = 0; i < m - 1; i++)
            xa++;
        for (int i = 0; i < n - 1; i++)
            xb++;

        if (a[m - 1] == 'M' && b[n - 1] == 'M')
            cout << "=" << endl;
        else if (a[m - 1] == 'M')
        {
            if (b[n - 1] == 'S')
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
        else if (b[n - 1] == 'M')
        {
            if (a[m - 1] == 'S')
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if (a[m - 1] > b[n - 1])
                cout << "<" << endl;
            else if (a[m - 1] < b[n - 1])
                cout << ">" << endl;
            else
            {
                if (a[m - 1] == 'S')
                {
                    if (xa > xb)
                        cout << "<" << endl;
                    else if (xa < xb)
                        cout << ">" << endl;
                    else
                        cout << "=" << endl;
                }
                else
                {
                    if (xa > xb)
                        cout << ">" << endl;
                    else if (xa < xb)
                        cout << "<" << endl;
                    else
                        cout << "=" << endl;
                }
            }
        }
    }

    return 0;
}