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
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 2)
                c++;
        }
        if (c == 0)
            cout << "1" << endl;
        else if (c % 2 == 0)
        {
            ll index, t = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == 2)
                    t++;
                if (t == c / 2)
                {
                    index = i+1;
                    break;
                }
            }
            cout << index << endl;
        }
        else
            cout << "-1" << endl;
        cout << endl;
    }

    return 0;
}