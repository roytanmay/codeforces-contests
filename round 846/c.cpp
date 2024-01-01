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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), c(m);
        unordered_map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        for (ll i = 0; i < m; i++)
            cin >> c[i];

        if (m >= n)
            cout << n << endl;
        else
        {
            priority_queue<ll> pq;
            for (auto i : freq)
                pq.push(i.second);

            sort(c.begin(), c.end());
            reverse(c.begin(), c.end());

            ll ans = 0, t;
            for (ll i = 0; i < m; i++)
            {
                t = pq.top();
                pq.pop();
                ans += min(t, c[i]);
                t -= min(t, c[i]);
                pq.push(t);
            }

            cout << ans << endl;
        }
        // cout << endl;
    }

    return 0;
}