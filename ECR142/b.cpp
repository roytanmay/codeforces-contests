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
        ll a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;

        if (a1 == 0)
            cout << "1" << endl;
        else
            cout << 2 * min(a2, a3) + a1 + min(a1 + 1, abs(a2 - a3) + a4) << endl;
    }

    return 0;
}