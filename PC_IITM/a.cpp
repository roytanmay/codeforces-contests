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
        ll n, m;
        cin >> n >> m;

        if (n < m)
            cout << "-1" << endl;
        else
            cout << n % m << endl;
    }

    return 0;
}