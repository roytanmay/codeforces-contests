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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > d)
            cout << "-1" << endl;
        else
        {
            int x = d - b;
            a += x;
            if (a < c)
                cout << "-1" << endl;
            else
                cout << abs(x) + abs(c - a) << endl;
        }
        cout << endl;
    }
}