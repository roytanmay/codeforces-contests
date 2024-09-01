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
        int l, r;
        cin >> l >> r;
        int ans = 0, num = l, d = 1;
        while (num <= r)
        {
            ans++;
            num += d;
            d++;
        }
        cout << ans << endl;
    }
}