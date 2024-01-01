#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        ll ans = (s[0] - '0') + (s[2] - '0');
        cout << ans << endl;
    }

    return 0;
}