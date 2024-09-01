#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int binexpo(int a, int b)
{
    if (a <= 1)
        return a;
    if (b == 1)
        return a;
    int r = binexpo(a, b / 2);
    if (b % 2 == 1)
        return (((r * r) % mod) * a) % mod;
    return (r * r) % mod;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, sumsq = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = (sum + a[i]) % mod;
            sumsq = (sumsq + ((a[i] * a[i]) % mod)) % mod;
        }
        sum = (sum * sum) % mod;
        sum = (((sum - sumsq + mod) % mod) * (binexpo(2, mod - 2) % mod)) % mod;
        int dn = (((n * (n - 1)) % mod) * (binexpo(2, mod - 2) % mod)) % mod;
        dn = dn % mod;
        int ans = ((sum % mod) * (binexpo(dn, mod - 2) % mod)) % mod;
        // int ans = sum / dn;

        cout << ans << endl;
    }
}