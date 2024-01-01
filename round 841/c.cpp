#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), countXor(2 * n, 0);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll coddsum = 0, prefixXor = 0;
        countXor[prefixXor]++;
        for (ll i = 0; i < n; i++)
        {
            prefixXor ^= a[i];
            // cout << prefixXor << endl;

            for (ll j = 0; j * j < 2 * n; j++)
            {
                if ((prefixXor ^ (j * j)) < 2 * n)
                    coddsum += countXor[prefixXor ^ (j * j)];
            }

            countXor[prefixXor]++;
        }

        ll ans = (n * (n + 1)) / 2 - coddsum;
        cout << ans << endl;
    }

    return 0;
}