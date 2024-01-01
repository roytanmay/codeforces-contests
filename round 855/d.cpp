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

        ll c = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            if (s[i] == s[i + 2])
                c++;
        }

        cout << n - 1 - c << endl;
        cout << endl;
    }

    return 0;
}