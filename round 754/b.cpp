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

        string s;
        cin >> s;

        ll c0 = 0, c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }

        vector<ll> indices;
        for (ll i = 0; i < n - c1; i++)
        {
            if (s[i] == '1')
                indices.push_back(i + 1);
        }
        for (ll i = c0; i < n; i++)
        {
            if (s[i] == '0')
                indices.push_back(i + 1);
        }

        if (indices.size() == 0)
            cout << "0" << endl;
        else
        {
            cout << "1" << endl;
            cout << indices.size() << " ";
            for (auto i : indices)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}