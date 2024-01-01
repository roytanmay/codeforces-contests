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

        ll t = 1, a;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            t *= a;
        }

        t += (n - 1);
        cout << 2022 * t << endl;
    }

    return 0;
}