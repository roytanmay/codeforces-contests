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
        int n, k;
        cin >> n >> k;
        int ans = 0, p = n;

        if (k > 0)
        {
            k -= min(k, p);
            p--;
            ans++;
        }
        while (k > 0)
        {
            k -= min(k, p);
            ans++;

            if (k > 0)
            {
                k -= min(k, p);
                ans++;
            }

            p--;
        }
        cout << ans << endl;
        cout << endl;
    }
}