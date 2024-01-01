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

        ll c = 0, t = n-1;
        while (t > 1)
        {
            c++;
            t /= 2;
        }

        ll m = pow(2, c);

        for (ll i = n - 1; i >= m; i--)
            cout << i << " ";
        for (ll i = 0; i < m; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}