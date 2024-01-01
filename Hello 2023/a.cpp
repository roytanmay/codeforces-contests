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

        string s;
        cin >> s;

        ll l = 0, r = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                l++;
            else
                r++;
        }

        if (l == n || r == n)
            cout << "-1" << endl;
        else if (s[0] == 'R' && s[n - 1] == 'L')
            cout << "0" << endl;
        else
        {
            ll index;
            for (ll i = 0; i < n - 1; i++)
            {
                if (s[i] == 'L' && s[i + 1] == 'R')
                {
                    index = i + 1;
                    break;
                }
            }

            cout << index << endl;
        }
    }

    return 0;
}