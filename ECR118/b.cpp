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
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll mini = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (mini > v[i])
                mini = v[i];
        }

        ll l = n / 2, j = l;
        for (ll i = 0; i <= l; i++)
        {
            if (v[i] != mini)
            {
                cout << v[i] << " " << mini << endl;
                j--;
            }

            if (j == 0)
                break;
        }
    }

    return 0;
}