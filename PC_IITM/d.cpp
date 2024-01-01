#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

ll solve(vector<ll> &v, vector<ll> &dp, ll i, ll &n)
{
    if (i >= n)
        return 0;
    if (i == n - 1)
    {
        return 1;
    }

    if (dp[i] != -1)
        return dp[i];
    if (v[i] % 2 == 0)
    {
        return dp[i] = (((solve(v, dp, i + 1, n) % mod) + (solve(v, dp, i + 2, n)) % mod)) % mod;
    }
    else
        return dp[i] = (solve(v, dp, i + 1, n) % mod);
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll ans = 0;
        vector<ll> dp(n, -1);

        cout << solve(v, dp, 0, n) << endl;
    }

    return 0;
}