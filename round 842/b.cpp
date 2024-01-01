#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
            cin >> p[i];

        ll target = 1;
        for (ll i = 0; i < n; i++)
        {
            if (p[i] == target)
                target++;
        }
        target--;

        if (target == n)
            cout << "0" << endl;
        else if (k == n)
            cout << "1" << endl;
        else
        {
            ll ans = (n - target) / k;
            if ((n - target) % k)
                ans++;
            cout << ans << endl;
        }
    }

    return 0;
}