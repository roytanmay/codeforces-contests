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
        string s;
        cin >> s;

        vector<ll> l(26, 0), u(26, 0);
        for (auto c : s)
        {
            if (c >= 'a' && c <= 'z')
                l[c - 'a']++;
            else
                u[c - 'A']++;
        }

        ll ans = 0, t;
        for (ll i = 0; i < 26; i++)
        {
            if (abs(l[i] - u[i]) > 1)
            {
                t = min(k, (abs(l[i] - u[i]) / 2));
                k -= min(k, (abs(l[i] - u[i]) / 2));
                ans += (min(l[i], u[i]) + t);
            }
            else
                ans += min(l[i], u[i]);
        }

        cout << ans << endl;
        // cout << endl;
    }

    return 0;
}