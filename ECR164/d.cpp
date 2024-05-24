#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
int mod = 998244353;

int binexp(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int res = binexp(a, b / 2);
    if (b % 2 == 1)
        return (((res * res) % mod) * a) % mod;
    return (res * res) % mod;
}

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (binexp(2, i) * a[i]) % mod;
        }
        cout << ans << endl;
    }
}