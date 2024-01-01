#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll getLcm(ll a, ll b)
{
    ll g = __gcd(a, b);
    return (a*b)/g;
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;

        ll sn = s.size(), tn = t.size();
        ll ms = getLcm(sn, tn)/sn, mt = getLcm(sn, tn)/tn;

        string temps = "", tempt = "";
        while(ms--) temps += s;
        while(mt--) tempt += t;

        if(temps == tempt) cout << temps << endl;
        else cout << "-1" << endl;
    }

    return 0;
}