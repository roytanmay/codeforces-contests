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
        int a, b, c;
        cin >> a >> b >> c;
        double d = max(a, b) - min(a, b);
        d /= 2;
        double ans = d / c;
        cout << ceil(ans) << endl;
        cout << endl;
    }
}