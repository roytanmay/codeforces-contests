#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> c(n);
        int maxi = 0, mini = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            maxi = max(maxi, c[i]);
            mini = min(mini, c[i]);
        }
        int s = 0, e = 1e12, mid, ans = maxi - mini;
        int g = __gcd(a, b);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            v[i] = c[i] % g;
        sort(v.begin(), v.end());
        ans = min(ans, v[n - 1] - v[0]);
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, v[i] + g - v[i + 1]);
        }

        cout << ans << endl;
    }
}