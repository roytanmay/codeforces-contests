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
        vector<ll> v(n), odd, even;
        ll c = 0, index;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 1)
            {
                c++;
                odd.push_back(i);
            }
            else
                even.push_back(i);
        }

        if (c == 0 || (n == 3 && c == 2))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (odd.size() >= 3)
            {
                for (ll i = 0; i < 3; i++)
                    cout << odd[i] + 1 << " ";
            }
            else
            {
                cout << odd[0] + 1 << " " << even[0] + 1 << " " << even[1] + 1;
            }
            cout << endl;
        }
    }

    return 0;
}