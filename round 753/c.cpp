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

        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        ll ans = v[0], prev = 0;

        for(ll i=1; i<n; i++)
        {
            prev += v[i-1];
            v[i] -= prev;
            ans = max(ans, v[i]);
        }

        cout << ans << endl;
    }

    return 0;
}