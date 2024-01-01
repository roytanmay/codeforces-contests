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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int i = 0;
        while (i < n)
        {
            int c = 0;
            while (i < n && a[i] <= q)
            {
                i++;
                c++;
            }
            if (c >= k)
            {
                int t = c - k + 1;
                ans += (c + 1) * t;
                ans -= ((c * (c + 1)) / 2 - ((k - 1) * k) / 2);
            }
            i++;
        }
        cout << ans << endl;
        cout << endl;
    }
}