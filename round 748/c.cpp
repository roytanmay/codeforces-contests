#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPossible(vector<ll> &v, int m, int n)
{
    ll move = 0, i = v.size() - m, catPos = 0;
    while (m--)
    {
        move = (n - v[i]);
        catPos += move;
        if (i < v.size() - 1 && catPos >= v[i + 1])
            return false;
        i++;
    }

    return true;
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(k);
        for (ll i = 0; i < k; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        ll low = 0, high = k, mid, ans;
        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (isPossible(v, mid, n))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}