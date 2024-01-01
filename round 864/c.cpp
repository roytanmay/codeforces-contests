#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m;
        int q = 3;
        bool f = false;
        int a = 1, b = 1, pd;
        while (q)
        {
            cout << "? " << a << " " << b << endl;
            int d;
            cin >> d;
            if (d == 0)
            {
                break;
            }
            if (q == 3)
            {
                a += d;
                b += d;
            }
            else if (q == 2)
            {
                a -= d;
                pd = d;
            }
            else
            {
                a += pd;
                b -= d;
            }
            q--;
        }
        cout << "! " << a << " " << b << endl;
        // cout << endl;
    }
}