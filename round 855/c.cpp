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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        priority_queue<ll> pq;
        for (auto i : v)
        {
            if (i > 0)
                pq.push(i);
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
        // cout << endl;
    }

    return 0;
}