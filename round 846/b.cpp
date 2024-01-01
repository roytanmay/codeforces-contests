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
        vector<ll> v(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        ll currSum = 0, ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            currSum += v[i];
            ans = max(ans, __gcd(currSum, sum - currSum));
        }

        cout << ans << endl;
    }

    return 0;
}