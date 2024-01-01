#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll a, b;
        priority_queue<ll, vector<ll>, greater<>> pq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            pq.push(a);
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> b;
            pq.pop();
            pq.push(b);
        }

        ll ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }
    return 0;
}