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
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        if (x1 > n / 2)
            x1 = n - x1 + 1;
        if (x2 > n / 2)
            x2 = n - x2 + 1;
        if (y1 > n / 2)
            y1 = n - y1 + 1;
        if (y2 > n / 2)
            y2 = n - y2 + 1;
        int m1 = min(x1, y1);
        int m2 = min(x2, y2);
        cout << m1 << " " << m2 << endl;
        cout << abs(m1 - m2) << endl;
        cout << endl;
    }
}