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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        vector<bool> vis(n, false);
        for (int i = 31; i >= 0; i--)
        {
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if ((1 << i) & a[j] && !vis[j])
                {
                    c++;
                    vis[j] = true;
                }
            }
            ans += ((c * (c - 1)) / 2);
        }
        cout << ans << endl;
        cout << endl;
    }
}