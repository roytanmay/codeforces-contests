#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

ll calculateXor(ll n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll axor = calculateXor(a - 1);

        if ((axor ^ b) == a)
            cout << a + 2 << endl;
        else if (axor == b)
            cout << a << endl;
        else
            cout << a + 1 << endl;
    }

    return 0;
}