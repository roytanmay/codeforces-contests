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
        ll n, a;
        cin >> n;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back({a, i});
        }

        sort(v.begin(), v.end());
        set<ll> st;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            st.insert(v[i].second);
        }
        ll res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            auto p = *(st.begin());
            res = max(res, abs(v[i].second - p) + v[i].first);
            p = *(st.rbegin());
            res = max(res, abs(v[i].second - p) + v[i].first);
            st.erase(v[i].second);
        }
        cout << res << '\n';
    }

    return 0;
}