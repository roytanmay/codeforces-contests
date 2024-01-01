#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

ll dsum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<pair<ll, ll>> digitSum(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        for (ll i = 0; i < n; i++)
        {
            digitSum[i] = make_pair(dsum(v[i]), dsum(dsum(v[i])));
        }
        ll fl = -1, fr = -1;
        for (ll i = 0; i < q; i++)
        {
            ll t;
            cin >> t;
            if (t == 1)
            {
                ll l, r;
                cin >> l >> r;
                if(fl == -1)
                {
                    fl = l;
                    fr = r;
                }
                else
                {
                    if(fl > l) fl = l;
                    if(fr < r) fr = r;
                }
            }
        }
    }

    return 0;
}