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

        vector<ll> a(n + 1, 0), psum1(n + 1, 0), psum2(n + 1, 0);
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        ll ans = 0;
        if (a[m] > 0 && m != 1)
        {
            a[m] = -a[m];
            ans++;
        }

        psum1[1] = psum2[1] = a[1];
        for (ll i = 2; i <= n; i++)
        {
            psum1[i] = psum1[i - 1] + a[i];
            psum2[i] = psum2[i - 1] + a[i];
        }

        priority_queue<pair<ll, ll>> q1;
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> q2;

        for (ll i = m - 1; i >= 1; i--)
        {
            while (psum1[i] < psum1[m])
            {
                psum1[m] -= (2 * q1.top().first);
                q1.pop();
                ans++;
            }

            if (a[i] > 0)
                q1.push(make_pair(a[i], i));
        }

        for (ll i = m + 1; i <= n; i++)
        {
            if (a[i] < 0)
                q2.push(make_pair(a[i], i));

            while (psum2[i] < psum2[m])
            {
                psum2[m] += (2 * q2.top().first);
                q2.pop();
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}