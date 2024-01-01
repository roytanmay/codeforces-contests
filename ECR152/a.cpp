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
        int b, c, h;
        cin >> b >> c >> h;
        if (c + h >= b - 1)
            cout << b - 1 + b << endl;
        else
            cout << c + h + (c + h + 1) << endl;
        cout << endl;
    }
}