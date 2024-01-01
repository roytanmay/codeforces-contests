#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1e9 + 7;

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        // ll d = (n * (n + 1) * (2 * n + 1)) / 6, t = ((n - 1) * n * (n + 1)) / 3;
        // ll res = ((d + t) * 2022) % mod;

        ll res = (((((n * (n + 1)) % mod) * (4 * n - 1)) % mod) * 337) % mod;

        cout << res << endl;
    }

    return 0;
}