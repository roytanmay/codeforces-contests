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
        vector<ll> h(n);
        ll c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
            if (h[i] == 1)
                c1++;
        }

        cout << (c1 / 2) + (c1 % 2) + (n - c1) << endl;
    }

    return 0;
}