#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, x, t;
        cin >> n >> x >> t;

        ll a = t / x, b = (a * (a + 1)) / 2;
        if (a > n)
            cout << (n * (n - 1)) / 2 << endl;
        else
            cout << a * n - b << endl;
        // cout << endl;
    }

    return 0;
}