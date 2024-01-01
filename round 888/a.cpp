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
        int n, m, h, k;
        cin >> n >> m >> k >> h;
        vector<int> heights(n);
        for (int i = 0; i < n; i++)
            cin >> heights[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int diff = abs(h - heights[i]);
            if (diff && diff % k == 0 && diff <= (m - 1) * k)
                ans++;
        }
        cout << ans << endl;
        cout << endl;
    }
}