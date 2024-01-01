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

        vector<ll> v(n * n);
        for (ll i = 0; i < n * n; i++)
            v[i] = i + 1;

        vector<vector<ll>> ans;
        ll s = 0, e = n * n - 1;
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            vector<ll> temp;
            for (ll j = 0; j < n; j++)
            {
                if (flag)
                    temp.push_back(v[s++]);
                else
                    temp.push_back(v[e--]);

                flag = !flag;
            }

            ans.push_back(temp);
        }

        if (n % 2 == 0)
        {
            for (ll i = 1; i < n; i = i + 2)
                reverse(ans[i].begin(), ans[i].end());
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}