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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<pair<ll, ll>> freq;
        for (ll i = n - 1; i >= 0; i--)
        {
            ll j = i;
            while (j >= 0 && a[j] == a[i])
                i--;
            freq.push_back({a[j], j - i});
            i++;
        }
        ll ans = freq[0].second;
        for (ll i = 1; i < freq.size(); i++)
        {
            if (freq[i].first == freq[i-1].first - 1)
            {
                if (freq[i].second > freq[i - 1].second)
                    ans += (freq[i].second - freq[i - 1].second);
            }
            else
            {
                ans += freq[i].second;
            }
        }
        cout << ans << endl
             << endl;
    }

    return 0;
}