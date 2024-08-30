#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int sign(int n)
{
    return n < 0 ? 0 : 1;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if (sign(xb - xa) == sign(xc - xa) && sign(yb - ya) == sign(yc - ya))
            cout << min(abs(xb - xa), abs(xc - xa)) + min(abs(yb - ya), abs(yc - ya)) + 1 << endl;
        else if (sign(xb - xa) == sign(xc - xa))
            cout << min(abs(xb - xa), abs(xc - xa)) + 1 << endl;
        else if (sign(yb - ya) == sign(yc - ya))
            cout << min(abs(yb - ya), abs(yc - ya)) + 1 << endl;
        else
            cout << "1" << endl;
        cout << endl;
    }
}