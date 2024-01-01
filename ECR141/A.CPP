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

        if (a[0] == a[n - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            reverse(a.begin(), a.end());

            if (a[0] == a[1])
                swap(a[1], a[n-1]);

            for (ll i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}