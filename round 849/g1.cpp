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
        ll n, c, a;
        cin >> n >> c;
        priority_queue<ll, vector<ll>, greater<>> pq;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a;
            pq.push(i + a);
        }
        ll ans = 0;
        while (!pq.empty())
        {
            a = pq.top();
            pq.pop();
            c -= a;
            if (c < 0)
                break;
            ans++;
        }
        cout << ans << endl
             << endl;
    }

    return 0;
}